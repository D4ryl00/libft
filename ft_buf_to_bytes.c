/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_to_bytes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:11:52 by rbarbero          #+#    #+#             */
/*   Updated: 2021/03/22 22:19:42 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

struct s_bytes	*ft_buf_to_bytes(t_buf *buffer)
{
	struct s_bytes	*bytes;

	if (!(bytes = (struct s_bytes *)malloc(sizeof(bytes))))
		return (NULL);
	if (!(bytes->bytes = (char *)malloc(sizeof(char) * buffer->i)))
	{
		free(bytes);
		return (NULL);
	}
	ft_memcpy(bytes->bytes, buffer->buf, buffer->i);
	bytes->size = buffer->i;
	return (bytes);
}
