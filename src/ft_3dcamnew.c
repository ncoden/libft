/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dcamnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:14:03 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:20:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_3dcam		*ft_3dcamnew(t_3dpos *pos, t_3dang *ang, int d, t_2dsize *view)
{
	t_3dcam		*new;

	if (!(new = (t_3dcam *)ft_memalloc(sizeof(t_3dcam))))
		return (NULL);
	if (pos != NULL)
		new->pos = *pos;
	if (ang != NULL)
		new->ang = *ang;
	new->d = d;
	if (view != NULL)
		new->view = *view;
	return (new);
}
