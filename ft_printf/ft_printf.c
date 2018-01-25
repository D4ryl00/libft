/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:37:12 by rbarbero          #+#    #+#             */
/*   Updated: 2018/01/24 15:59:55 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

static int		get_nbr_conv(const char *format)
{
	int	size;

	size = 0;
	while (*format)
	{
		while (*format && *format != '%')
			format++;
		if (*format == '%')
		{
			size++;
			format++;
		}
		while (*format && ft_strchr(AUTH_CHAR, *format))
			if (ft_strchr(CONV_SPEC, *(format++)))
				break ;
	}
	return (size);
}

static SCHAR	print_format_conv(t_buffer *buffer, const char **format
		, t_conv *convs, int *i)
{
	if (!buf_add_seq(buffer, print_conv(&convs[(*i)++], buffer->n)))
		return (0);
	while (**format)
		if (!ft_strchr(AUTH_CHAR, **format) && (*format)++)
			break ;
		else if (ft_strchr(CONV_SPEC, **format) && (*format)++)
			break ;
		else
			(*format)++;
	return (1);
}

static SCHAR	print_format(const char *format, t_conv *convs)
{
	size_t		len;
	t_buffer	buffer;
	int			i;

	i = 0;
	buffer.n = 0;
	buffer.seq = NULL;
	while (*format)
	{
		len = 0;
		while (*format && *format != '%' && *format != '{' && format++)
			len++;
		if (len)
			if (!buf_add_str(&buffer, ft_strsub(format - len, 0, len)))
				return (-1);
		if (*format == '%' && convs && format++
				&& !print_format_conv(&buffer, &format, convs, &i))
			return (-1);
		else if (*format == '{')
			if (!print_color(&buffer, &format))
				return (-1);
		buf_print(&buffer);
	}
	return (buffer.n);
}

static int		return_free(int ret, t_conv **convs, int conv_nbr)
{
	int	i;

	i = -1;
	while (++i < conv_nbr)
	{
		free((*convs)[i].width);
		free((*convs)[i].precision);
		if ((*convs)[i].specifier[0] != 'n')
			free((*convs)[i].data);
	}
	free(*convs);
	*convs = NULL;
	return (ret);
}

int				ft_printf(const char *format, ...)
{
	va_list	va_args;
	int		conv_nbr;
	t_conv	*convs;
	int		ret;

	if (!format)
		return (-1);
	conv_nbr = get_nbr_conv(format);
	if (!(convs = (t_conv *)malloc(sizeof(t_conv) * conv_nbr)))
		return (0);
	if (conv_nbr)
	{
		init_convs(convs, conv_nbr);
		va_start(va_args, format);
		if (!(parse_format(convs, format, va_args)))
			return (return_free(0, &convs, conv_nbr));
		if ((ret = print_format(format, convs)) < 0)
			return (return_free(-1, &convs, conv_nbr));
		va_end(va_args);
	}
	else if ((ret = print_format(format, NULL)) < 0)
		return (return_free(-1, &convs, conv_nbr));
	return (return_free(ret, &convs, conv_nbr));
}
