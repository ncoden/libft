/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:05:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:40:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"

t_lst			*ft_lstmap(t_lst *lst, t_lst *(*cmp)(t_lst *node))
{
	t_lst		*new;
	t_lst		*new_begin;
	t_lst		*new_prev;

	new_begin = NULL;
	while (lst != NULL)
	{
		new = (t_lst *)ft_memalloc(sizeof(t_lst));
		if (new == NULL)
			return (NULL);
		if (new_begin == NULL)
			new_begin = new;
		ft_memcpy(new, (*cmp)(lst), sizeof(t_lst));
		new_prev->next = new;
		new_prev = new;
		lst = lst->next;
	}
	return (new_begin);
}
