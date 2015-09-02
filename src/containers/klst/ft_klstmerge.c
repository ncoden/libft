/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:06:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/klst.h"

t_klst			*ft_klstmerge(t_klst **dst, t_klst *src)
{
	t_klst		*node;
	t_klst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if ((node = ft_klstadd(dst, src)))
			ft_klstadd(&diff, node);
		src = src->next;
	}
	return (diff);
}
