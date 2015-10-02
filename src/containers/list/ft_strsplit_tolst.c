/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_tolst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:15:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:12:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"
#include "libft/containers/list.h"

t_lst			*ft_strsplit_tolst(const char *s, char c)
{
	size_t		i;
	size_t		size_word;
	t_lst		*lst;

	i = 0;
	size_word = 0;
	lst = NULL;
	while (i == 0 || (i > 0 && s[i - 1] != '\0'))
	{
		if ((s[i] == '\0' || s[i] == c) && size_word > 0)
		{
			ft_lstpushback(&lst,
				(void*)ft_strsub(s, i - size_word, size_word));
			size_word = 0;
		}
		if (s[i] != c)
			size_word++;
		i++;
	}
	return (lst);
}
