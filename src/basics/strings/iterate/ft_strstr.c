/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 14:44:26 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/09 16:03:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			*ft_strstr(const char *s, const char *search)
{
	size_t		i;

	i = 0;
	while (*s != '\0'
		&& search[i] != '\0')
	{
		if (*s == search[i])
			i++;
		else
		{
			s -= i;
			i = 0;
		}
		s++;
	}
	if (search[i] == '\0')
		return ((char *)(s - i));
	return (NULL);
}
