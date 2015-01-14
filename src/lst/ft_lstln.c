/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:46:38 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:34:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstln(void *content, size_t size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst != NULL)
	{
		if (content != NULL)
			lst->size = size;
		else
			lst->size = 0;
		lst->content = content;
		lst->next = NULL;
	}
	return (lst);
}
