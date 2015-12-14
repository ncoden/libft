/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 15:05:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:19:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int				ft_min(int nbr1, int nbr2)
{
	return ((nbr1 < nbr2) ? nbr1 : nbr2);
}

size_t			ft_sizemin(size_t nbr1, size_t nbr2)
{
	return ((nbr1 < nbr2) ? nbr1 : nbr2);
}
