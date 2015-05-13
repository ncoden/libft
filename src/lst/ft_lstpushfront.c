/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 16:20:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstpushfront(t_lst **alst, void *data, size_t csize)
{
	t_lst	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstnew(data, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstaddfront(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
