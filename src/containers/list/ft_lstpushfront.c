/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/01 20:38:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst	*ft_lstpushfront(t_lst **alst, void *data)
{
	t_lst	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstnew(data);
		if (new_lst == NULL)
			return (NULL);
		ft_lstaddfront(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
