/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:14:43 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 14:19:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = ft_strnew(len);
	if (new_str != NULL)
	{
		while (i < len)
		{
			new_str[i] = s[start + i];
			i++;
		}
	}
	return (new_str);
}
