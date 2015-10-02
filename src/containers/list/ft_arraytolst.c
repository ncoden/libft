/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraytolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:30:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/01 21:02:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

t_lst			*ft_arraytolst(void **arr)
{
	t_lst		*lst;

	lst = NULL;
	while (*arr != NULL)
	{
		if (!ft_lstpushback(&lst, *arr))
			return (NULL);
		arr++;
	}
	return (lst);
}
