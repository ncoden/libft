/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:43:28 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/05 15:36:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*new_str;

	i = 0;
	size = ft_strlen(s);
	new_str = ft_strnew(size);
	if (new_str != NULL)
	{
		while (i < size)
		{
			new_str[i] = (*f)(i, s[i]);
			i++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
