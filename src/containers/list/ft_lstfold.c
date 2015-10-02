/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:48:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 15:11:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			*ft_lstfold(t_lst *lst, void *(*f)(const void *, const void *))
{
	void		*result;

	if (lst != NULL)
	{
		result = lst->data;
		lst = lst->next;
		while (lst != NULL)
		{
			result = (*f)(result, lst->data);
			lst = lst->next;
		}
		return (result);
	}
	return (NULL);
}
