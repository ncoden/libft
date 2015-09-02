/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:28:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:14:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void	**ft_lsttoarray(t_lst *lst)
{
	int		i;
	int		size;
	t_lst	*next;
	void	**array;

	array = NULL;
	if (lst)
	{
		size = ft_lstlen(lst);
		if ((array = (void **)malloc(sizeof(void *) * (size + 1))))
		{
			i = 0;
			while (i < size)
			{
				array[i] = lst->data;
				next = lst->next;
				free(lst);
				lst = next;
				i++;
			}
			array[i] = NULL;
		}
	}
	return (array);
}
