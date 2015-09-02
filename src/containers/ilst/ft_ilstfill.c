/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 18:05:06 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 13:59:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/basics/memory.h"
#include "libft/containers/ilst.h"

t_bool			ft_ilstfill(t_ilst **dst, t_ilst *src)
{
	t_ilst		*prev;
	t_ilst		*cpy;

	while (src)
	{
		if (!(ft_ilstprev(*dst, src->index, &prev)))
		{
			if (!(cpy = (t_ilst *)ft_memdup(src, sizeof(t_ilst))))
				return (FALSE);
			if (prev)
			{
				cpy->next = prev->next;
				prev->next = cpy;
			}
			else
			{
				cpy->next = *dst;
				*dst = cpy;
			}
		}
		src = src->next;
	}
	return (TRUE);
}
