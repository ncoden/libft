/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 18:33:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:25:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}
