/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:39:41 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/04 10:50:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	void				*found;
	const unsigned char	*str_char;

	i = 0;
	found = 0;
	str_char = str;
	while (i < n)
	{
		if (str_char[i] == (unsigned char)c)
			found = (char*)(&str_char[i]);
		i++;
	}
	return (found);
}
