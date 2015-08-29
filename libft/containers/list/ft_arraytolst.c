/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraytolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:30:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 18:59:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

t_lst			*ft_arraytolst(void **array)
{
	int			i;
	t_lst		*lst;

	i = 0;
	lst = NULL;
	while (array[i] != NULL)
	{
		if (!ft_lstpushback(&lst, array[i], sizeof(array[i])))
			return (NULL);
		i++;
	}
	free(array);
	return (lst);
}
