/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:24:34 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/05 13:34:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
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
			new_str[i] = (*f)(s[i]);
			i++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
