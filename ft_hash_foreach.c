/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rems14 </var/spool/mail/rems14>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:31:43 by rems14            #+#    #+#             */
/*   Updated: 2021/01/26 01:29:01 by rems14           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_foreach(struct s_dict *dict, void (*f)(void *))
{
	size_t	i;

	i = 0;
	while (i < dict->size)
	{
		if (ft_hash_is_occupied(&dict->table[i]))
		{
			f(dict->table[i].value);
		}
		i++;
	}
}
