/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:38:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t size)
{
	t_list	*lst;

	lst = (t_list *)ft_memalloc(sizeof(t_list));
	if (lst != NULL)
	{
		if (content != NULL)
		{
			if (!(lst->content = ft_memdup(content, size)))
				return (NULL);
			lst->size = size;
		}
		else
		{
			lst->content = NULL;
			lst->size = 0;
		}
		lst->next = NULL;
	}
	return (lst);
}
