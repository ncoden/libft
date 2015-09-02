/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_envget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 09:48:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:28:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/strings.h"

char			*ft_envget(char *name)
{
	int				i;
	extern char		**environ;

	if (!environ || !name)
		return (NULL);
	i = 0;
	while (environ[i] != NULL)
	{
		if (ft_strccmp(name, environ[i], '=') == 0)
			return (ft_strchr(environ[i], '=') + 1);
		i++;
	}
	return (NULL);
}
