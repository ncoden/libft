/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:14:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 11:19:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/strings.h"

char			*ft_strsub(const char *s, size_t start, size_t n)
{
	char		*ret;

	if (!(ret = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(ret, &s[start], n);
	ret[n] = '\0';
	return (ret);
}
