/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:00:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/ilst.h"

t_ilst			*ft_ilstget(t_ilst *lst, int index)
{
	if (!lst)
		return (NULL);
	while (lst && lst->index < index)
		lst = lst->next;
	if (lst && lst->index == index)
		return (lst);
	return (NULL);
}
