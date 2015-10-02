/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_tolst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:15:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:37:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"
#include "libft/containers/list.h"

t_lst			*ft_strsplit_tolst(const char *s, char c)
{
	size_t		i;
	size_t		word_size;
	t_lst		*lst;

	i = 0;
	word_size = 0;
	lst = NULL;
	while (i == 0 || (i > 0 && s[i - 1] != '\0'))
	{
		if ((s[i] == '\0' || s[i] == c) && word_size > 0)
		{
			ft_lstpushback(&lst,
				(void *)ft_strsub(s, i - word_size, word_size));
			word_size = 0;
		}
		if (s[i] != c)
			word_size++;
		i++;
	}
	return (lst);
}
