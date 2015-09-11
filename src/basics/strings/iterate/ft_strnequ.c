/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:06:51 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 00:00:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"

t_bool			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (n == 0)
		return (TRUE);
	i = 0;
	while (s1[i] == s2[i]
		&& s1[i] != '\0'
		&& i < (n - 1))
		i++;
	return ((unsigned char)s1[i] == (unsigned char)s2[i]);
}
