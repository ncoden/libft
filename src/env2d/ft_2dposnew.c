/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dposnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:45:11 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:17:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_2dpos		*ft_2dposnew(int x, int y)
{
	t_2dpos	*new;

	if (!(new = (t_2dpos *)malloc(sizeof(t_2dpos))))
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
