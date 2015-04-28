/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 19:10:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputo(unsigned long long int nbr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (!format)
		return (0);
	len = (nbr != 0) ? ft_ullongbaselen(nbr, 8) : 0;
	total_len = MAX(format->precision, len);
	if ((nbr == 0 && format->precision == -1)
		|| (format->opt_alt && !(len < format->precision)))
		total_len++;
	if (!format->opt_minus && total_len < format->min_len)
		ft_putnchr((format->opt_zero && format->precision == -1) ?
			'0' : ' ', format->min_len - total_len);
	if (len < format->precision)
		ft_putnchr('0', format->precision - len);
	else if (nbr != 0 && format->opt_alt)
		ft_putchr('0');
	if (nbr != 0 || format->precision == -1 || format->opt_alt)
		ft_putullongbase(nbr, 8);
	if (format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	return (MAX(total_len, format->min_len));
}
