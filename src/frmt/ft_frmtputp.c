/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 08:33:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 12:44:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputp(size_t ptr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (format)
	{
		len = ft_ptrbaselen(ptr, 16);
		total_len = (format->precision > len ? format->precision : len) + 2;
		if (!format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
		ft_putstr("0x");
		if (len < format->precision)
			ft_putnchar('0', format->precision - len);
		ft_putptrdigits(ptr, "0123456789abcdef");
		if (format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
	}
}
