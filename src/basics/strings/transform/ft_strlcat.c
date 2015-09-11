/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 19:15:11 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/11 19:28:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

size_t			ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		end;

	i = 0;
	end = ft_strnlen(dst, n);
	if (end < n)
	{
		while (src[i] != '\0'
			&& (end + i) < (n - 1))
		{
			dst[end + i] = src[i];
			i++;
		}
		dst[end + i] = '\0';
	}
	return (end + ft_strlen(src));
}
