/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:51:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:00:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/ilst.h"

t_ilst			*ft_ilstinsert(t_ilst **dst, t_ilst *src)
{
	t_ilst		*cpy;
	t_ilst		*node;
	t_ilst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if (!(cpy = ft_memdup(src, sizeof(t_ilst))))
			return (NULL);
		if ((node = ft_ilstadd(dst, cpy)))
			ft_ilstadd(&diff, node);
		src = src->next;
	}
	return (diff);
}
