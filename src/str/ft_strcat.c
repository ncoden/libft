/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 18:31:11 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/15 09:53:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int fin;

	i = 0;
	fin = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[fin + i] = src[i];
		i++;
	}
	dest[fin + i] = '\0';
	return (dest);
}
