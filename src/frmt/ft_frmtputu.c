/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 14:23:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputu(unsigned long long int nbr, t_frmt *format)
{
	int		len;
	int		total_len;

	if (format)
	{
		len = ft_ullonglen(nbr);
		total_len = MAX(format->precision, len);
		if (!format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
		if (len < format->precision)
			ft_putnchr('0', format->precision - len);
		ft_putullong(nbr);
		if (format->opt_minus && total_len < format->min_len)
			ft_putspace(format->min_len - total_len);
	}
}
