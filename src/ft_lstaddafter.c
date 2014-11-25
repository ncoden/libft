/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddafter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:58:09 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/20 19:15:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddafter(t_list *lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = lst->next;
		lst->next = new;
	}
}
