/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 15:40:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hash			*ft_hashnew(const void *key, const void *data, size_t keysize,
								size_t size)
{
	t_lst	*lst;

	if (!(lst = (t_lst *)ft_memalloc(sizeof(t_lst))))
		return (NULL);
	if (data != NULL)
	{
		if (!(lst->data = ft_memdup(data, size)))
		{
			return (NULL);
			free(lst);
		}
		lst->size = size;
	}
	else
	{
		lst->data = NULL;
		lst->size = 0;
	}
	lst->next = NULL;
	return (lst);
}
