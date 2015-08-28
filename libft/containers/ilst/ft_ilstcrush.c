/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstcrush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 13:58:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/ilst.h"

void			ft_ilstcrush(t_ilst **dst, t_ilst *src, void (*func)(t_ilst *))
{
	t_ilst		*node;

	while (src != NULL)
	{
		if ((node = ft_ilstadd(dst, src)))
			(*func)(node);
		src = src->next;
	}
}
