/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dposnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:05:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:21:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_3dpos		*ft_3dposnew(int x, int y, int z)
{
	t_3dpos	*new;

	if (!(new = (t_3dpos *)malloc(sizeof(t_3dpos))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
