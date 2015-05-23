/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstprev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:26:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 22:48:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstprev(t_ilst *lst, int index)
{
	if (!lst || lst->index > index)
		return (NULL);
	while (lst->next && lst->next->index < index)
		lst = lst->next;
	return (lst);
}
