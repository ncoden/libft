/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:48:19 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 23:28:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstiter(t_lst *lst, void (*f)(t_lst *node))
{
	while (lst != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
