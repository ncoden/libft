/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 18:44:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputd(long long int nbr, t_frmt *format)
{
	int		len;

	if (format->min_len > 0)
		len = ft_llonglen(nbr);
	else
		len = 0;
	if (nbr >= 0)
	{
		if (format->opt_plus)
			ft_putchar('+');
		else if (format->opt_space)
			ft_putchar(' ');
		len++;
	}
	if (!format->opt_minus && len < format->min_len)
		ft_putnchar(format->opt_zero ? '0' : ' ', format->min_len - len);
	ft_putllong(nbr);
	if (format->opt_minus && len < format->min_len)
		ft_putspace(format->min_len - len);
}
