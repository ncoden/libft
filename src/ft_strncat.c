/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 18:33:36 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/04 10:11:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
