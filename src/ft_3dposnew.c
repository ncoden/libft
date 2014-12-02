/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos3dnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:05:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 16:09:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pos3d		*ft_pos3dnew(int x, int y, int z)
{
	t_pos3d	*new;

	if (!(new = (t_pos3d *)malloc(sizeof(t_pos3d))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
