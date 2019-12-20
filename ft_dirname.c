/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 14:07:28 by rbarbero          #+#    #+#             */
/*   Updated: 2019/12/20 18:03:16 by rbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** MAXPATHLEN
*/
#include <sys/param.h>

#include "libft.h"

static void	get_parent_dir(char *dest, const char *path)
{
	int	i;

	i = ft_strlen(path) - 1;
	while (i > 0 && path[i] == '/')
		i--;
	while (i > 0 && path[i] != '/')
		i--;
	if (!path[0] || (!i && path[i] != '/'))
		ft_strcpy(dest, ".");
	else
	{
		while (i > 0 && path[i] == '/')
			i--;
		if (!i && path[i] == '/')
			ft_strcpy(dest, "/");
		else
		{
			ft_strncpy(dest, path, i + 1);
			dest[i + 2] = '\0';
		}
	}
}

char		*ft_dirname(const char *path)
{
	static char	dir[MAXPATHLEN];

	if (!path)
	{
		ft_strcpy(dir, ".");
		return (dir);
	}
	get_parent_dir(dir, path);
	return (dir);
}
