/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endianness_64.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:53:58 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 16:23:48 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** uint16_t, uint32_t, uint64_t
*/

#include <stdint.h>

#include "libft.h"

uint64_t	ft_swap_int64(uint64_t d)
{
	return (((d >> 56) & 0xff)
			| ((d >> 40) & 0xff00)
			| ((d >> 24) & 0xff0000)
			| ((d >> 8) & 0xff000000)
			| ((d << 8) & 0xff00000000)
			| ((d << 24) & 0xff0000000000)
			| ((d << 40) & 0xff000000000000)
			| ((d << 56) & 0xff00000000000000));
}

uint64_t	endian_64_big_to_native(uint64_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint64_t	endian_64_little_to_native(uint64_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint64_t	endian_64_native_to_big(uint64_t d)
{
	if (ft_endianness_which() == BIG_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}

uint64_t	endian_6_native_to_little(uint64_t d)
{
	if (ft_endianness_which() == LITTLE_ENDIAN)
		return (d);
	return (ft_swap_int32(d));
}
