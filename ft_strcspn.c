/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 00:23:10 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/10 00:27:52 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** size_t
*/
#include <stddef.h>

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	size;

	size = 0;
	while (*s && ft_strcmp(s++, reject++))
		size++;
	return (0);
}
