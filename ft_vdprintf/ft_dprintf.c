/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:00:56 by rbarbero          #+#    #+#             */
/*   Updated: 2018/04/01 19:28:46 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vdprintf.h"
#include <stdarg.h>

int	ft_dprintf(int fd, const char *format, ...)
{
	int		ret;
	va_list	va_args;

	va_start(va_args, format);
	ret = ft_vdprintf(fd, format, va_args);
	va_end(va_args);
	return (ret);
}
