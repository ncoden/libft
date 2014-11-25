/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 07:50:14 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/05 13:32:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	char	*buffer;

	buffer = (char *)malloc(size);
	if (buffer != NULL)
	{
		i = 0;
		while (i < size)
		{
			buffer[i] = 0;
			i++;
		}
	}
	return ((void *)buffer);
}
