/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_tolst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:15:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 18:21:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"
#include "libft/containers/list.h"
#include "libft/utils/parse.h"

t_lst			*ft_strsplit_tolst(const char *s, char c)
{
	char		*word;
	t_lst		*lst;
	t_lst		*iter;

	lst = NULL;
	iter = NULL;
	while ((word = ft_prsword(&s, c)))
		ft_lstpushiter(&lst, &iter, ft_strsub(word, 0, s - word));
	return (lst);
}
