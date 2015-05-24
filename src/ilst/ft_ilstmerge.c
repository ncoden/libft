/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:59:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstmerge(t_ilst **dst, t_ilst *src)
{
	t_ilst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		ft_ilstadd(&diff, ft_ilstadd(dst, src));
		src = src->next;
	}
	return (diff);
}
