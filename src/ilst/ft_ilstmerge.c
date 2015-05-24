/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 16:05:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstmerge(t_ilst **dst, t_ilst *src)
{
	t_ilst		*node;
	t_ilst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if ((node = ft_ilstadd(dst, src)))
			ft_ilstadd(&diff, node);
		src = src->next;
	}
	return (diff);
}
