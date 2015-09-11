/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:12:44 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/09 16:03:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			*ft_strnstr(const char *s, const char *search, size_t n)
{
	size_t		i;
	size_t		i_search;

	i = 0;
	i_search = 0;
	while (s[i] != '\0'
		&& search[i_search] != '\0'
		&& i < n)
	{
		if (s[i] == search[i_search])
			i_search++;
		else
		{
			i -= i_search;
			i_search = 0;
		}
		i++;
	}
	if (search[i_search] == '\0')
		return ((char *)(s + i - i_search));
	return (NULL);
}
