/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:27:28 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/24 20:10:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbrright(int nbr, size_t min_len)
{
	size_t		len;

	len = ft_nbrlen(nbr);
	if (len < min_len)
		ft_putspace(min_len - len);
	ft_putnbr(nbr);
}
