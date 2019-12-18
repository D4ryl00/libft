/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:05:45 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/18 13:00:04 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Open addressing algorithm
*/

struct s_bucket	*ft_hash_insert(struct s_dict *dict, char *key, void *value)
{
	struct s_bucket	*bucket;

	bucket = ft_hash_find(dict, key);
	if (!ft_hash_is_occupied(bucket))
	{
		bucket->key = key;
		bucket->value = value;
	}
	else
		bucket->value = value;
	return (bucket);
}
