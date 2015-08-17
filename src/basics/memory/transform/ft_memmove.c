/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:28:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/04 11:47:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_char;
	const char	*src_char;
	char		*buffer;

	i = 0;
	dst_char = dst;
	src_char = src;
	buffer = (char *)malloc(sizeof(char) * (len + 2));
	while (i < len)
	{
		buffer[i] = src_char[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_char[i] = buffer[i];
		i++;
	}
	return (dst);
}
