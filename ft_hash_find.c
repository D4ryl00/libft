/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:36:32 by rbarbero          #+#    #+#             */
/*   Updated: 2021/03/02 01:08:30 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_bucket	*ft_hash_find(struct s_dict *dict, const char *key)
{
	size_t			i;

	i = ft_hash(key) % dict->size;
	while (ft_hash_is_occupied(&dict->table[i])
			&& ft_strcmp(dict->table[i].key, key))
		i = (i + 1) % dict->size;
	return (&dict->table[i]);
}
