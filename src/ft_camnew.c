/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_camnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:14:03 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 18:35:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cam		*ft_camnew(t_pos3d *pos, t_ang3d *ang, int d, t_size2d *view)
{
	t_cam	*new;

	if (!(new = (t_cam *)malloc(sizeof(t_cam))))
		return (NULL);
	new->pos = *pos;
	new->ang = *ang;
	new->d = d;
	new->view = *view;
	return (new);
}
