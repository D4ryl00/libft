/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:22:49 by rbarbero          #+#    #+#             */
/*   Updated: 2018/01/15 18:23:11 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtolower(char *s)
{
	int	i;

	i = -1;
	if (s)
		while (s[++i])
			s[i] = ft_tolower(s[i]);
}