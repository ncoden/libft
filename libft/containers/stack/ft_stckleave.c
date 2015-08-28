/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckleave.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 20:56:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:21:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/booleans.h"
#include "libft/containers/stack.h"

t_bool			ft_stckleave(t_stck **astck)
{
	int			*count;
	t_stck		*stck;

	stck = *astck;
	if (stck)
	{
		ft_stckclr(stck);
		if (stck->next != NULL || stck->head > 0)
		{
			stck->count = 1;
			if (!(count = ft_stckpull(astck)))
				return (FALSE);
			stck->count = *count;
			free(count);
		}
	}
	return (TRUE);
}
