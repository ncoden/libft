/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:46:38 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:13:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

t_lst		*ft_lstnew(void *data, size_t size)
{
	t_lst	*lst;

	lst = (t_lst *)malloc(sizeof(t_lst));
	if (lst != NULL)
	{
		if (data != NULL)
			lst->size = size;
		else
			lst->size = 0;
		lst->data = data;
		lst->next = NULL;
	}
	return (lst);
}
