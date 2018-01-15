/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:27:39 by rbarbero          #+#    #+#             */
/*   Updated: 2018/01/15 16:31:29 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_size(unsigned long long int n, int base)
{
	int	size;

	size = 1;
	while (n / base)
	{
		size++;
		n /= base;
	}
	return (size);
}

static char	conv_digit(unsigned long long int n, int base)
{
	int	digit;

	digit = n % base;
	if (digit < 10)
		digit += '0';
	else
		digit += 'a' - 10;
	return (digit);
}

char		*ft_ulltoa_base(unsigned long long int n, int base)
{
	char	*res;
	int		len;
	int		i;

	len = get_size(n, base);
	if (!(res = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = len;
	while (--i >= 0)
	{
		res[i] = conv_digit(n, base);
		n /= base;
	}
	return (res);
}
