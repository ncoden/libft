/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:48:59 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:59:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, const char *src, char c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == c)
			return (&(dst[i + 1]));
		i++;
	}
	return (0);
}
