/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endianness_16.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:53:58 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 16:07:14 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** uint16_t, uint32_t, uint64_t
*/

#include <stdint.h>

#include "libft.h"

uint16_t	ft_swap_int16(uint16_t d)
{
	return ((uint16_t)((d >> 8) | (d << 8)));
}

uint16_t	endian_16_big_to_native(uint16_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int16(d));
}

uint16_t	endian_16_little_to_native(uint16_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int16(d));
}

uint16_t	endian_16_native_to_big(uint16_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int16(d));
}

uint16_t	endian_16_native_to_little(uint16_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int16(d));
}
