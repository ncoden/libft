/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 10:56:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtputx(unsigned long long int nbr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (!format)
		return (0);
	len = (nbr != 0) ? ft_ullongbaselen(nbr, 16) : 0;
	total_len = MAX(format->precision, len);
	if (nbr == 0 && format->precision == -1)
		total_len++;
	if (format->opt_alt && nbr != 0)
		total_len += 2;
	if (!format->opt_minus && total_len < format->min_len)
		ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - total_len);
	if (format->opt_alt && nbr != 0)
		ft_putstr(format->format == 'X' ? "0X" : "0x");
	if (len < format->precision)
		ft_putnchr('0', format->precision - len);
	if (nbr != 0 || format->precision == -1)
		ft_putullongdigits(nbr, (format->format == 'X') ?
			"0123456789ABCDEF" : "0123456789abcdef");
	if (format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	return (MAX(total_len, format->min_len));
}
