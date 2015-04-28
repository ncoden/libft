/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 14:12:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputo(unsigned long long int nbr, t_frmt *format)
{
	int		len;
	int		total_len;

	if (format)
	{
		len = ft_ullongbaselen(nbr, 8);
		total_len = MAX(format->precision, len) + (nbr != 0 && format->opt_alt);
		if (!format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
		if (nbr != 0 && format->opt_alt)
			ft_putchr('0');
		if (len < format->precision)
			ft_putnchr('0', format->precision - len);
		ft_putullongbase(nbr, 8);
		if (format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
	}
}
