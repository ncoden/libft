/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 12:13:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:47:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

char	*ft_strdjoin(const char *s1, const char *d, const char *s2)
{
	size_t		size1;
	size_t		sized;
	size_t		size2;
	char		*new_str;

	size1 = ft_strlen(s1);
	sized = ft_strlen(d);
	size2 = ft_strlen(s2);
	new_str = ft_strnew(size1 + sized + size2);
	if (new_str != NULL)
	{
		ft_strcpy(new_str, s1);
		ft_strcpy(&(new_str[size1]), d);
		ft_strcpy(&(new_str[size1 + sized]), s2);
	}
	return (new_str);
}
