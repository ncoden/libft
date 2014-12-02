/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ang3dnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:08:38 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 18:34:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ang3d		*ft_ang3dnew(double x, double y, double z)
{
	t_ang3d	*new;

	if (!(new = (t_ang3d *)malloc(sizeof(t_ang3d))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
