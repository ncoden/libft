/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraytolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:30:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 18:06:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

t_lst			*ft_arraytolst(void **arr)
{
	t_lst		*lst;
	t_lst		*iter;

	lst = NULL;
	iter = NULL;
	while (*arr != NULL)
	{
		if (!ft_lstpushiter(&lst, &iter, *arr))
			return (NULL);
		arr++;
	}
	return (lst);
}
