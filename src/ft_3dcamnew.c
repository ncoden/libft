/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_camnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:14:03 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/01 16:41:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cam		*ft_camnew(t_pos3d *pos, t_ang3d *ang, int d, t_size2d *view)
{
	t_cam	*new;

	if (!(new = (t_cam *)ft_memalloc(sizeof(t_cam))))
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
