/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:09:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:11:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"

t_lst	*ft_lstdup(t_lst *lst)
{
	t_lst	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		if (!(ft_lstpushback(&new_lst, ft_memdup(lst->data, lst->size),
				lst->size)))
			return (NULL);
		lst = lst->next;
	}
	return (new_lst);
}
