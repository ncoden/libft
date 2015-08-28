/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddafter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:58:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:09:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void	ft_lstaddafter(t_lst *lst, t_lst *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = lst->next;
		lst->next = new;
	}
}
