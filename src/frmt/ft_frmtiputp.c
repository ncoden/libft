/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 08:33:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 19:05:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputp(size_t ptr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (!format)
		return (0);
	len = (ptr != 0) ? ft_ptrbaselen(ptr, 16) : 0;
	total_len = MAX(format->precision, len) + 2;
	if (ptr == 0 && format->precision == -1)
		total_len++;
	if (!format->opt_minus && total_len < format->min_len
		&& !(format->opt_zero && format->precision == -1))
		ft_putspace(format->min_len - total_len);
	ft_putstr("0x");
	if (!format->opt_minus && total_len < format->min_len
		&& format->opt_zero && format->precision == -1)
		ft_putnchr('0', format->min_len - total_len);
	if (len < format->precision)
		ft_putnchr('0', format->precision - len);
	if (ptr != 0 || format->precision == -1)
		ft_putptrdigits(ptr, "0123456789abcdef");
	if (format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	return (MAX(total_len, format->min_len));
}
