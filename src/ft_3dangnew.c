/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dangnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:08:38 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:18:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_3dang		*ft_3dangnew(double x, double y, double z)
{
	t_3dang		*new;

	if (!(new = (t_3dang *)malloc(sizeof(t_3dang))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
