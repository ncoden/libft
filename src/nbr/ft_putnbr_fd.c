/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:29:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 13:04:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
	{
		ft_putchr('-');
		ft_putnbr(-(nbr / 10));
		ft_putchr_fd('0' - (nbr % 10), fd);
	}
	else if (nbr < 10)
		ft_putchr_fd('0' + nbr, fd);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchr_fd('0' + (nbr % 10), fd);
	}
}
