/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:05:45 by rbarbero          #+#    #+#             */
/*   Updated: 2021/01/26 03:14:55 by rems14           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Open addressing algorithm
*/

struct s_bucket	*ft_hash_insert(struct s_dict *dict, const char *key
		, void *value)
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
