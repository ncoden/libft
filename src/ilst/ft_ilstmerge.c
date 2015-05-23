/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstmerge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:47:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstmerge(t_ilst **dst, t_ilst *src)
{
	while (src != NULL)
	{
		ft_ilstadd(dst, src);
		src = src->next;
	}
	return (*dst);
}
