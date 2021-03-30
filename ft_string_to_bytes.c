/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_to_bytes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:53:13 by rbarbero          #+#    #+#             */
/*   Updated: 2021/03/22 23:28:47 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

struct s_bytes	*ft_string_to_bytes(const char *s)
{
	struct s_bytes	*bytes;
	size_t			size;

	if (!(bytes = (struct s_bytes *)malloc(sizeof(*bytes))))
		return (NULL);
	size = ft_strlen(s);
	if (!(bytes->bytes = (char *)malloc(sizeof(char) * size)))
	{
		free(bytes);
		return (NULL);
	}
	ft_memcpy(bytes->bytes, s, size);
	bytes->size = size;
	return (bytes);
}
