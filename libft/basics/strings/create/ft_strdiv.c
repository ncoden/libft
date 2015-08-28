/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdiv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 12:52:37 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:43:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void			get_size(char *s, char c, size_t *size, size_t *count)
{
	char	word_found;

	*size = 0;
	*count = 0;
	word_found = 0;
	while (*s != '\0')
	{
		if (*s != c || word_found)
		{
			word_found = 1;
			(*size)++;
		}
		if (*s == c && word_found)
			(*count)++;
		if (*s == c)
			word_found = 0;
		s++;
	}
	if (word_found)
	{
		(*size)++;
		(*count)++;
	}
}

static void			make_array(char **array, char *s, char c)
{
	int		i;
	size_t	size;

	i = 0;
	size = 0;
	while (*s != '\0')
	{
		if (*s == c && size > 0)
		{
			*s = '\0';
			array[i] = s - size;
			size = 0;
			i++;
		}
		else if (*s != c)
			size++;
		s++;
	}
	if (size > 0)
	{
		array[i] = s - size;
		i++;
	}
	array[i] = NULL;
}

char				**ft_strdiv(char *s, char c)
{
	size_t	size;
	size_t	count;
	char	**array;

	if (!s)
		return (NULL);
	get_size(s, c, &size, &count);
	if (!(array = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	make_array(array, s, c);
	return (array);
}
