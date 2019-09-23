/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endianness_32.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:53:58 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 16:06:29 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** uint16_t, uint32_t, uint64_t
*/

#include <stdint.h>

#include "libft.h"

uint32_t	ft_swap_int32(uint32_t d)
{
	return (((d >> 24) & 0xff)
			| ((d << 8) & 0xff0000)
			| ((d >> 8) & 0xff00)
			| ((d << 24) & 0xff000000));
}

uint32_t	endian_32_big_to_native(uint32_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint32_t	endian_32_little_to_native(uint32_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint32_t	endian_32_native_to_big(uint32_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint32_t	endian_32_native_to_little(uint32_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}
