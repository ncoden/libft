/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy_tostr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:59:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:10:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

char	*ft_lstcpy_tostr(t_lst *lst, char *dst, size_t n)
{
	size_t		i;
	size_t		i_data;
	char		*view;

	i = 0;
	while (lst != NULL)
	{
		view = (char *)(lst->data);
		i_data = 0;
		while (view[i] != '\0')
		{
			dst[i] = view[i_data];
			i_data++;
			i++;
			if (i == n)
				return (dst);
		}
		lst = lst->next;
	}
	dst[i] = '\0';
	return (dst);
}
