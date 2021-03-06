/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_table_create.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:19:58 by rbarbero          #+#    #+#             */
/*   Updated: 2020/12/23 10:53:36 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** malloc
*/
#include <stdlib.h>

#include "libft.h"

/*
** Allocate data structure for s_dict.
*/
struct s_dict	*ft_hash_table_create(size_t size)
{
	struct s_dict	*dict;
	struct s_bucket	*table;

	if (!(table = (struct s_bucket *)malloc(sizeof(*table) * size)))
		return (NULL);
	ft_memset(table, 0, sizeof(*table) * size);
	if (!(dict = (struct s_dict *)malloc(sizeof(*dict))))
		return (NULL);
	ft_hash_table_init(dict, table, size);
	return dict;
}
