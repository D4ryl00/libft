/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_mod_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:55:29 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/18 12:06:37 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vsdprintf.h"
#include "libft.h"
#include <stdlib.h>

static void	mod_width_aux(char *res, char **str, size_t str_len, t_conv *conv)
{
	unsigned char	i;

	i = -1;
	if (conv->zero && (**str == '0' && (*str)[1] == 'b'))
	{
		res[++i] = '0';
		res[++i] = 'b';
		while (++i < *conv->width - str_len + 2)
			res[i] = '0';
		ft_strcat(res, &((*str)[2]));
	}
	else
	{
		while (++i < *conv->width - str_len)
			res[i] = conv->zero ? '0' : ' ';
		ft_strcat(res, *str);
	}
}

char		*bin_mod_width(char **str, t_conv *conv)
{
	char			*res;
	size_t			str_len;
	unsigned char	i;

	conv->minus = *conv->width < 0 ? 1 : conv->minus;
	*conv->width = ft_absolute(*conv->width);
	str_len = ft_strlen(*str);
	if (str_len < (size_t)*conv->width)
	{
		if (!(res = (char *)ft_memalloc(sizeof(char) * (*conv->width + 1))))
			return (NULL);
		if (!conv->minus)
			mod_width_aux(res, str, str_len, conv);
		else
		{
			i = str_len - 1;
			ft_strcat(res, *str);
			while (++i < *conv->width)
				res[i] = ' ';
		}
		free(*str);
		*str = res;
	}
	return (*str);
}
