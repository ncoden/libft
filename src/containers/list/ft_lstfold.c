/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:48:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:30:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			*ft_lstfold(t_lst *lst,
					void *(*f)(const void *data1, const void *data2))
{
	void		*res;

	if (lst != NULL)
	{
		res = lst->data;
		lst = lst->next;
		while (lst != NULL)
		{
			res = (*f)(res, lst->data);
			lst = lst->next;
		}
		return (res);
	}
	return (NULL);
}
