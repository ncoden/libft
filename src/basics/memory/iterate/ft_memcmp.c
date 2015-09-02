/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:51:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 19:18:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int				ft_memcmp(const void *b1, const void *b2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((char *)b1)[i] != ((char *)b2)[i])
			return (((char *)b1)[i] - ((char *)b2)[i]);
		i++;
	}
	return (0);
}
