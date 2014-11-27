/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:31 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 13:40:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec		*ft_vecnew(t_pos *pos, int len, double ang)
{
	t_vec	 *new;

	if (!(new = (t_vec *)malloc(sizeof(t_vec))))
		return (NULL);
	new->pos = *pos;
	new->len = len;
	new->ang = ang;
	return (new);
}
