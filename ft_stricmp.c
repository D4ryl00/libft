/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 07:43:07 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 07:48:44 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insensitive case compared
*/

int	ft_stricmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && ft_toupper(*s1) == ft_toupper(*s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)ft_toupper(*s1) - (unsigned char)ft_toupper(*s2));
}
