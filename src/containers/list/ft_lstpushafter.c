/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushafter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:06:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:09:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst			*ft_lstpushafter(t_lst *lst, void *data)
{
	t_lst		*new;

	new = ft_lstnew(data);
	if (lst != NULL && new != NULL)
	{
		new->next = lst->next;
		lst->next = new;
	}
	return (new);
}
