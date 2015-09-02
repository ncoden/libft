/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:14:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:58:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

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
