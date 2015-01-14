/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:51:08 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/04 14:53:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;

	i = 0;
	s1_char = s1;
	s2_char = s2;
	while (i < n)
	{
		if (s1_char[i] > s2_char[i])
			return (1);
		if (s1_char[i] < s2_char[i])
			return (-1);
		i++;
	}
	return (0);
}
