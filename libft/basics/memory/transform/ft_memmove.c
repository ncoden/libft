/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:28:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 19:32:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;

	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n > 0)
		{
			n--;
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	return (dst);
}
