/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsertincsort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:13:15 by rbarbero          #+#    #+#             */
/*   Updated: 2017/12/18 15:24:03 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstinsertincsort(t_list **list, t_list *node
		, int (*cmp)(t_list *, t_list *))
{
	t_list	*back;
	t_list	*current;

	if (!list)
		return (NULL);
	if (!*list)
		return ((*list = node));
	back = NULL;
	current = *list;
	while (current)
	{
		if (cmp(node, current) <= 0)
		{
			if (!back)
				*list = node;
			else
				back->next = node;
			node->next = current;
			return (node);
		}
		back = current;
		current = current->next;
	}
	back->next = node;
	return (node);
}
