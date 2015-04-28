/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 16:59:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputx(unsigned long long int nbr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (format)
	{
		len = ft_ullongbaselen(nbr, 16);
		total_len = format->precision > len ? format->precision : len;
		if (format->opt_alt)
			total_len += 2;
		if (!format->opt_minus && total_len < format->min_len)
			ft_putnchr(format->opt_zero ? '0' : ' ',
				format->min_len - total_len);
		if (format->opt_alt)
			ft_putstr(format->format == 'X' ? "0X" : "0x");
		if (len < format->precision)
			ft_putnchr('0', format->precision - len);
		if (format->format == 'X')
			ft_putullongdigits(nbr, "0123456789ABCDEF");
		else
			ft_putullongdigits(nbr, "0123456789abcdef");
		if (format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
	}
}
