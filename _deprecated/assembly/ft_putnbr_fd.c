/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:29:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/04 19:34:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
	{
		ft_putchr_fd('-', fd);
		if (nbr <= -10)
			ft_putnbr_fd(-(nbr / 10), fd);
		ft_putchr_fd('0' - (nbr % 10), fd);
	}
	else if (nbr < 10)
		ft_putchr_fd('0' + nbr, fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchr_fd('0' + (nbr % 10), fd);
	}
}
