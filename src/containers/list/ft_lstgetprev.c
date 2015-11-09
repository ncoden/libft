/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetprev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 15:42:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/08 16:00:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"
#include "libft/containers/list.h"

t_lst			*ft_lstgetprev(t_lst *lst, t_bool (*f)(t_lst *node, void *data),
					void *data, t_lst **prev)
{
	if (!lst)
	{
		*prev = NULL;
		return (NULL);
	}
	if ((*f)(lst, data))
	{
		*prev = NULL;
		return (lst);
	}
	while (lst->next && !(*f)(lst->next, data))
		lst = lst->next;
	*prev = lst;
	return (lst->next);
}
