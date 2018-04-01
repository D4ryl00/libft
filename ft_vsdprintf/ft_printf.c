/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:36:17 by rbarbero          #+#    #+#             */
/*   Updated: 2018/04/01 23:42:26 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vsdprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	va_args;

	va_start(va_args, format);
	ret = ft_dprintf(1, format, va_args);
	va_end(va_args);
	return (ret);
}
