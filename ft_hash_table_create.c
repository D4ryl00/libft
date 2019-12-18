/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_table_create.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:18:06 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/18 13:00:49 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** malloc
*/
#include <stdlib.h>

#include "libft.h"

/*
** Initializise the s_dict structure.
** Allocate an array of buckets if <table> is NULL.
*/

struct s_bucket	*ft_hash_table_create(struct s_dict *dict,
		struct s_bucket *table, size_t size)
{
	dict->size = size;
	if (table)
		dict->table = table;
	else
	{
		if (!(dict->table = (struct s_bucket *)malloc(sizeof(*dict->table)
							* size)))
			return (NULL);
	}
	return (dict->table);
}
