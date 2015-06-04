/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckenter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 20:53:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/04 21:41:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_stckenter(t_stck **astck)
{
	int			*count;

	if (*astck)
	{
		if (!(count = (int *)malloc(sizeof(int))))
			return (FALSE);
		*count = (*astck)->count;
		if (!(ft_stckpush(astck, count)))
			return (FALSE);
		(*astck)->count = 0;
	}
	return (TRUE);
}
