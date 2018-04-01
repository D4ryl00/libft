/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_tools_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:14:14 by rbarbero          #+#    #+#             */
/*   Updated: 2018/04/01 19:03:36 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vdprintf.h"
#include "libft.h"
#include <stdlib.h>

void	arg_del(void *content, size_t content_size)
{
	free(content);
	(void)content_size;
}
