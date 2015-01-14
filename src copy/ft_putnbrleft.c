/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:30:18 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/18 11:48:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbrleft(int nbr, size_t min_len)
{
	size_t		len;

	len = ft_nbrlen(nbr);
	ft_putnbr(nbr);
	if (len < min_len)
		ft_putspace(min_len - len);
}
