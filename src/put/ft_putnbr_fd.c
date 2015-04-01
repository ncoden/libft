/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:29:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/03/29 16:04:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = -nbr;
		}
		if (nbr <= 9)
			ft_putchar_fd('0' + nbr, fd);
		else
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putchar_fd('0' + (nbr % 10), fd);
		}
	}
}
