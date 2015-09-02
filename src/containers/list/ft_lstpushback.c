/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:13:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst	*ft_lstpushback(t_lst **alst, void *data, size_t csize)
{
	t_lst	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstnew(data, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstaddback(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
