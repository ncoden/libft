/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 15:42:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/08 16:28:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"
#include "libft/containers/list.h"

t_lst			*ft_lstget(t_lst *lst, t_bool (*f)(t_lst *node, void *data),
					void *data)
{
	while (lst != NULL)
	{
		if ((*f)(lst, data))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
