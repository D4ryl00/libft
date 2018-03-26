/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 07:28:24 by rbarbero          #+#    #+#             */
/*   Updated: 2018/03/26 07:33:38 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelif(t_list **list, int (*test)(t_list *)
		, void (*del)(void *, size_t))
{
	while (*list)
	{
		if (test(*list))
			ft_lstdelnode(list, *list, del);
		*list = (*list)->next;
	}
}
