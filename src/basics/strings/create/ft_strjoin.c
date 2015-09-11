/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:22:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/11 17:15:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/strings.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		size1;
	size_t		size2;
	char		*ret;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(char) * (size1 + size2 + 1))))
		return (NULL);
	ft_strcpy(ret, s1);
	ft_strcpy(&ret[size1], s2);
	return (ret);
}
