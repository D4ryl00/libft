/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rems14 </var/spool/mail/rems14>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:22:12 by rems14            #+#    #+#             */
/*   Updated: 2021/01/26 01:25:48 by rems14           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_delete(struct s_dict *dict, char *key)
{
	struct s_bucket	*bucket;

	bucket = ft_hash_find(dict, key);
	bucket->key = NULL;
	bucket->value = NULL;
}
