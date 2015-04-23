/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 14:44:26 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/06 12:18:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int found_i;
	int size;

	i = 0;
	found_i = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return ((char*)str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[found_i])
			found_i++;
		else
			found_i = 0;
		i++;
		if (found_i == (size))
			return ((char*)(str + i - found_i));
	}
	return (0);
}
