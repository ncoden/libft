/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 19:15:11 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/06 15:38:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_unsstrlen(char *str, size_t max)
{
	size_t	size;

	size = 0;
	while (str[size] != '\0' && size < max)
		size++;
	return (size);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_unsstrlen(dest, size);
	if (end == size)
		return (end + ft_strlen(src));
	while ((end + i) < size - 1 && src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (end + ft_strlen(src));
}
