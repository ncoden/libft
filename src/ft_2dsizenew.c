/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size2dnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:26:50 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 23:06:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size2d		*ft_size2dnew(size_t x, size_t y)
{
	t_size2d	*new;

	if (!(new = (t_size2d *)malloc(sizeof(t_size2d))))
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
