/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushafter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:16:02 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpushafter(t_list *lst, const void *content, size_t csize)
{
	t_list	*new;

	new = ft_lstnew(content, csize);
	if (lst != NULL && new != NULL)
	{
		new->next = lst->next;
		lst->next = new;
	}
	return (new);
}
