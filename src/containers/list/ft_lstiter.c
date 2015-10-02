/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:48:19 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:30:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstiter(t_lst *lst, void (*cmp)(t_lst *node))
{
	while (lst != NULL)
	{
		(*cmp)(lst);
		lst = lst->next;
	}
}
