/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckenter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 20:53:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/05 18:12:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_stckenter(t_stck **astck)
{
	int			*count;
	t_stck		*stck;

	stck = *astck;
	if (stck && (stck->next != NULL || stck->head > 0))
	{
		if (!(count = (int *)malloc(sizeof(int))))
			return (FALSE);
		*count = stck->count;
		if (!(ft_stckpush(astck, count)))
			return (FALSE);
		stck->count = 0;
	}
	return (TRUE);
}
