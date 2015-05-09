/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraytolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:30:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/09 15:22:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_arraytolst(void **array)
{
	int		i;
	t_lst	*lst;

	i = 0;
	lst = NULL;
	while (array[i] != NULL)
	{
		if (!ft_lstlnback(&lst, array[i], sizeof(array[i])))
			return (NULL);
		i++;
	}
	if (array != NULL)
		free(array);
	return (lst);
}
