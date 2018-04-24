/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_flush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:50:46 by rbarbero          #+#    #+#             */
/*   Updated: 2018/04/24 18:04:57 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_buf_flush(char **dest, t_buf *buffer)
{
	char	*tmp;
	int		i;

	if (!(tmp = (char *)malloc(sizeof(char) * (ft_strlen(*dest) +
						buffer->i + 1))))
		return (0);
	i = 0;
	if (buffer->i && *dest)
	{
		i = -1;
		while ((*dest)[++i])
			(*dest)[i] = tmp[i];
		free(*dest);
		*dest = tmp;
	}
	else if (buffer->i)
		ft_strncpy(*dest, buffer->buf, buffer->i);
	ft_strncpy((*dest) + i, buffer->buf, buffer->i);
	(*dest)[i + buffer->i] = '\0';
	buffer->i = 0;
	return (1);
}
