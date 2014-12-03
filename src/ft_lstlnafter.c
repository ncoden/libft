/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnafter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:06:01 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:34:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlnafter(t_list *lst, void *content, size_t csize)
{
	t_list	*new;

	new = ft_lstln(content, csize);
	if (lst != NULL && new != NULL)
	{
		new->next = lst->next;
		lst->next = new;
	}
	return (new);
}
