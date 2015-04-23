/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:22:22 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/05 15:36:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		size1;
	size_t		size2;
	char		*new_str;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new_str = ft_strnew(size1 + size2);
	if (new_str != NULL)
	{
		strcpy(new_str, s1);
		strcpy(&(new_str[size1]), s2);
	}
	return (new_str);
}
