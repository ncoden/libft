/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 18:33:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 01:35:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

char			*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		i;
	char		*end;

	i = 0;
	end = ft_strchr(dst, '\0');
	while (src[i] != '\0' && i < n)
	{
		end[i] = src[i];
		i++;
	}
	end[i] = '\0';
	return (dst);
}
