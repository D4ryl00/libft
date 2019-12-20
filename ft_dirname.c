/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 14:07:28 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/20 15:22:43 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** MAXPATHLEN
*/
#include <sys/param.h>

#include "libft.h"

char	*ft_dirname(const char *path)
{
	static char	dir[MAXPATHLEN];
	int			i;

	ft_memset(dir, 0, MAXPATHLEN);
	i = ft_strlen(path) - 1;
	while (i > 0 && path[i] == '/')
		i--;
	while (i > 0 && path[i] != '/')
		i--;
	if (!i && path[i] != '/')
		ft_strcpy(dir, ".");
	else
	{
		while (i > 0 && path[i] == '/')
			i--;
		if (!i && path[i] == '/')
			ft_strcpy(dir, "/");
		else
		{
			ft_strncpy(dir, path, i + 1);
			dir[i + 2] = '\0';
		}
	}
	return (dir);
}
