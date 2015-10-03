/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:28:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 18:14:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void			**ft_lsttoarray(t_lst *lst)
{
	int			i;
	int			len;
	void		**arr;

	if (lst == NULL)
		return (NULL);
	len = ft_lstlen(lst);
	if (!(arr = (void **)malloc(sizeof(void *) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = lst->data;
		lst = lst->next;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
