/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:09:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 00:17:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst			*ft_lstdup(t_lst *lst)
{
	t_lst		*cpy;

	cpy = NULL;
	while (lst != NULL)
	{
		if (!(ft_lstpushback(&cpy, lst->data)))
			return (NULL);
		lst = lst->next;
	}
	return (cpy);
}
