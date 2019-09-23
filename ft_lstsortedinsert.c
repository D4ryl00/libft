/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsortedinsert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:40:27 by rbarbero          #+#    #+#             */
/*   Updated: 2019/09/23 07:34:38 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insertbefore(t_list **list, t_list *back, t_list *node,
		t_list *current)
{
	if (!back)
		*list = node;
	else
		back->next = node;
	node->next = current;
}

/*
** Find the last equal node to insert the new node after it.
*/

static void	insertafter(t_list *node, t_list *current,
		int (*cmp)(t_list *, t_list *))
{
	t_list	*next;

	while (current->next && cmp(node, current->next) == 0)
		current = current->next;
	next = current->next;
	current->next = node;
	node->next = next;
}

t_list		*ft_lstsortedinsert(t_list **list, t_list *node
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
			if (cmp(node, current) < 0)
				insertbefore(list, back, node, current);
			else
				insertafter(node, current, cmp);
			return (node);
		}
		back = current;
		current = current->next;
	}
	back->next = node;
	return (node);
}
