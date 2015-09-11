/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:28:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/11 21:49:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/parse.h"

static inline size_t	word_count(const char *s, char c)
{
	size_t		count;

	count = 0;
	while (ft_prsword(&s, c))
		count++;
	return (count);
}

char					**ft_strsplit(const char *s, char c)
{
	size_t		i;
	char		*word;
	char		**array;

	if (!(array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while ((word = ft_prsword(&s, c)))
	{
		array[i] = ft_strsub(word, 0, s - word);
		i++;
	}
	array[i] = NULL;
	return (array);
}
