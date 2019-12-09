/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_lookup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:06:25 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/09 16:08:20 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_hash_lookup(struct s_dict *dict, char *key)
{
	struct s_bucket	*bucket;

	bucket = ft_hash_find(dict, key);
	if (bucket)
		return (bucket->value);
	return (NULL);
}
