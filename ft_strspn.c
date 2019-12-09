/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 00:18:46 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/10 00:26:20 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** size_t
*/
#include <stddef.h>

size_t	strspn(const char *s, const char *accept)
{
	size_t	size;

	size = 0;
	while (*s && (*s++ == *accept++))
		size++;
	return (size);
}
