/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:45:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:42:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memdup(const void *src, size_t size)
{
	size_t		i;
	void		*cpy;
	const char	*src_char;
	char		*cpy_char;

	i = 0;
	cpy = malloc(size);
	src_char = src;
	cpy_char = cpy;
	if (cpy != NULL)
	{
		while (i < size)
		{
			cpy_char[i] = src_char[i];
			i++;
		}
		return (cpy);
	}
	else
		return (NULL);
}
