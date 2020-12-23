/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_table_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:18:06 by rbarbero          #+#    #+#             */
/*   Updated: 2020/12/23 10:54:51 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** malloc
*/
#include <stdlib.h>

#include "libft.h"

/*
** Initializise the s_dict structure.
** Consider dict and table arguments are not NULL.
*/

void	*ft_hash_table_init(struct s_dict *dict,
		struct s_bucket *table, size_t size)
{
	dict->size = size;
	dict->table = table;
}
