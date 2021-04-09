/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bytes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:58:17 by rbarbero          #+#    #+#             */
/*   Updated: 2021/04/10 00:03:07 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_free_bytes(struct s_bytes *bytes)
{
	if (bytes)
	{
		if (bytes->bytes)
			free(bytes->bytes);
		free(bytes);
	}
}
