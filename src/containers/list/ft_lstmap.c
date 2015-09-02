/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:05:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:12:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*newlst;
	t_lst	*newlst_first;
	t_lst	*newlst_prev;

	newlst_first = NULL;
	while (lst != NULL)
	{
		newlst = (t_lst *)ft_memalloc(sizeof(t_lst));
		if (newlst == NULL)
			return (NULL);
		if (newlst_first == NULL)
			newlst_first = newlst;
		ft_memcpy(newlst, (*f)(lst), sizeof(t_lst));
		newlst_prev->next = newlst;
		newlst_prev = newlst;
		lst = lst->next;
	}
	return (newlst_first);
}
