/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 19:56:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 11:39:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_stckshift(t_stck **astck)
{
	t_stck		*stck;

	stck = *astck;
	if (stck->count <= 0)
		return (FALSE);
	if (stck->count == 1)
	{
		*astck = stck->next;
		free(stck->datas);
		free(stck);
		return (TRUE);
	}
	stck->count--;
	return (TRUE);
}
