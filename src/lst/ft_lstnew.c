/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:38:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/12 22:51:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst			*ft_lstnew(void const *data, size_t size)
{
	t_lst	*lst;

	if (!(lst = (t_lst *)ft_memalloc(sizeof(t_lst))))
		return (NULL);
	if (data != NULL)
	{
		if (!(lst->data = ft_memdup(data, size)))
		{
			return (NULL);
			free(lst);
		}
		lst->size = size;
	}
	else
	{
		lst->data = NULL;
		lst->size = 0;
	}
	lst->next = NULL;
	return (lst);
}
