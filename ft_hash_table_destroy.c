/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_table_destroy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:51:04 by rbarbero          #+#    #+#             */
/*   Updated: 2020/12/23 11:01:02 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** free
*/
#include <stdlib.h>

#include "libft.h"

void	ft_hash_table_destroy(struct s_dict *dict)
{
	free(dict->table);
	free(dict);
}
