/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdiv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 12:52:37 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 16:33:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/parse.h"

static inline size_t	word_count(char *s, char c)
{
	size_t		count;

	count = 0;
	while (ft_prsword((const char **)&s, c))
		count++;
	return (count);
}

char					**ft_strdiv(char *s, char c)
{
	size_t		i;
	char		**array;

	if (!(array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while ((array[i] = ft_prsword((const char **)&s, c)))
	{
		if (*s != '\0')
		{
			*s = '\0';
			s++;
		}
		i++;
	}
	return (array);
}
