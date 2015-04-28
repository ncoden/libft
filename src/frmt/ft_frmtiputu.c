/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 17:59:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputu(unsigned long long int nbr, t_frmt *format)
{
	int			len;
	int			total_len;

	if (!format)
		return (0);
	len = (nbr != 0) ? ft_ullonglen(nbr) : 0;
	total_len = MAX(format->precision, len);
	if (nbr == 0 && format->precision == -1)
		total_len++;
	if (!format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	if (len < format->precision)
		ft_putnchr('0', format->precision - len);
	if (nbr != 0 || format->precision == -1)
		ft_putullong(nbr);
	if (format->opt_minus && total_len < format->min_len)
		ft_putspace(format->min_len - total_len);
	return (MAX(total_len, format->min_len));
}
