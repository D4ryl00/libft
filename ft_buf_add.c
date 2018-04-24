/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 09:11:23 by rbarbero          #+#    #+#             */
/*   Updated: 2018/04/24 14:33:17 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_buf_add(t_buf *buffer, char c, char **dest)
{
	if (!BUFFER_SIZE)
	{
		if (!ft_strpushback(dest, c))
			return (0);
	}
	else if (buffer->i < BUFFER_SIZE)
		buffer->buf[(buffer->i)++] = c;
	else if (!ft_buf_flush(dest, buffer))
		return (0);
	return (1);
}
