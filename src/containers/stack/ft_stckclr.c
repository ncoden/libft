/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 21:18:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:19:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/stack.h"

void			ft_stckclr(t_stck *stck)
{
	int			count;
	t_stck		*view;
	t_stck		*next;

	count = stck->count;
	view = (t_stck *)stck->next;
	while (count > stck->size)
	{
		count -= stck->size;
		free(view->datas);
		next = (t_stck *)view->next;
		free(view);
		view = next;
	}
	stck->head -= count;
	stck->count = 0;
}
