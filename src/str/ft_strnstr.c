/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:12:44 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/06 12:28:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	found_i;

	i = 0;
	found_i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (i < size && str[i] != '\0')
	{
		if (str[i] == to_find[found_i])
			found_i++;
		else
			found_i = 0;
		i++;
		if (to_find[found_i] == '\0')
			return ((char*)(str + i - found_i));
	}
	return (0);
}
