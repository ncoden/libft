/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 10:43:12 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/06 11:49:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*cpy;

	i = 0;
	size = ft_strlen(src);
	cpy = (char*)malloc(sizeof(char) * (size + 1));
	if (cpy != NULL)
	{
		while (i < size)
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
		return (cpy);
	}
	else
		return (NULL);
}
