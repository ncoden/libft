/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 10:53:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int		get_len(long long int nbr)
{
	int		len;

	len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static inline int		get_total_len(long long int nbr, int len,
							t_frmt *format)
{
	int		total_len;

	total_len = MAX(format->precision, len);
	if (nbr < 0)
		total_len++;
	if (nbr == 0 && format->precision == -1)
		total_len++;
	if ((nbr > 0 || (nbr == 0 && format->precision == -1))
		&& (format->opt_plus || format->opt_space))
		total_len++;
	return (total_len);
}

size_t					ft_frmtputd(long long int nbr, t_frmt *format)
{
	int		len;
	int		total_len;

	if (!format)
		return (0);
	len = get_len(nbr);
	total_len = get_total_len(nbr, len, format);
	if (!format->opt_minus && total_len < format->min_len
		&& !(format->opt_zero && format->precision < 0))
		ft_putspace(format->min_len - total_len);
	if (nbr < 0)
		ft_putchr('-');
	if (nbr >= 0 && (format->opt_plus || format->opt_space))
		ft_putchr(format->opt_plus ? '+' : ' ');
	if (!format->opt_minus && total_len < format->min_len
		&& format->opt_zero && format->precision < 0)
		ft_putnchr('0', format->min_len - total_len);
	if (len < format->precision)
		ft_putnchr('0', format->precision - len);
	if (nbr != 0 || format->precision == -1)
		ft_putullong(SIGN(nbr) * (unsigned long long int)nbr);
	if (format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	return (MAX(total_len, format->min_len));
}
