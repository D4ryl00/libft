/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 07:28:24 by rbarbero          #+#    #+#             */
/*   Updated: 2018/03/26 17:49:49 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelif(t_list **list, int (*test)(t_list *)
		, void (*del)(void *, size_t))
{
	t_list	*next;
	while (*list)
	{
		next = (*list)->next;
		if (test(*list))
			ft_lstdelnode(list, *list, del);
		*list = next;
	}
}
