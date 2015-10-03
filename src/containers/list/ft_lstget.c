/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 14:46:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 00:18:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst			*ft_lstget(t_lst *lst, int index)
{
	while (lst != NULL && index > 0)
	{
		lst = lst->next;
		index--;
	}
	return (lst);
}
