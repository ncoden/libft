/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/09 15:30:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			*ft_strrchr(const char *s, char c)
{
	char		*last_c;

	last_c = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_c = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (last_c);
}
