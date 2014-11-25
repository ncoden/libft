/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:05:20 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:40:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*newlst_first;
	t_list	*newlst_prev;

	newlst_first = NULL;
	while (lst != NULL)
	{
		newlst = (t_list *)ft_memalloc(sizeof(t_list));
		if (newlst == NULL)
			return (NULL);
		if (newlst_first == NULL)
			newlst_first = newlst;
		ft_memcpy(newlst, (*f)(lst), sizeof(t_list));
		newlst_prev->next = newlst;
		newlst_prev = newlst;
		lst = lst->next;
	}
	return (newlst_first);
}
