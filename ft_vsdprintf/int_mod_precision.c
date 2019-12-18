/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_mod_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:54:52 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/18 12:09:47 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vsdprintf.h"
#include "libft.h"
#include <stdlib.h>

static char	*int_mod_precision_aux(char **str, size_t len, unsigned char sign)
{
	char			*res;
	unsigned char	i;
	unsigned char	zero;

	i = sign ? 0 : -1;
	zero = 0;
	while ((*str)[++i] == '0')
		zero++;
	if (zero)
	{
		if (!(res = (char *)ft_memalloc(sizeof(char)
						* (len + sign + 1 - zero))))
			return (NULL);
		i = 0;
		if (sign)
			res[i++] = **str;
		while ((*str)[i] == '0')
			i++;
		ft_strcat(&res[i], *str + i);
		free(*str);
		*str = res;
	}
	return (*str);
}

char		*int_mod_precision(char **str, int precision)
{
	size_t			len;
	char			*res;
	unsigned char	sign;
	unsigned char	i;

	sign = **str == '-' || **str == '+' ? 1 : 0;
	len = ft_strlen(*str);
	if (precision - ((int)len - sign) > 0)
	{
		if (!(res = (char *)ft_memalloc(sizeof(char) * (precision + sign + 1))))
			return (NULL);
		i = 0;
		if (sign)
			res[i++] = **str;
		while ((int)len - sign < precision--)
			res[i++] = '0';
		ft_strcat(&res[i], *str + sign);
		free(*str);
		*str = res;
	}
	else if (precision - ((int)len - sign) < 0)
		if (!int_mod_precision_aux(str, len, sign))
			return (NULL);
	return (*str);
}
