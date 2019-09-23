/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_endianness.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:15:59 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 15:28:51 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_endianness_which(void)
{
	int		x;
	char	*y;

	x = 1;
	y = (char *)&x;
	if (*y == x)
		return (LITTLE_ENDIAN);
	return (BIG_ENDIAN);
}
