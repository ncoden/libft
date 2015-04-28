/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 13:50:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputd(long long int nbr, t_frmt *format)
{
	int		len;

	if (format)
	{
		len = ft_llonglen(nbr);
		if (nbr < 0 && format->opt_zero)
			ft_putchr('-');
		if (nbr >= 0 && (format->opt_plus || format->opt_space))
		{
			ft_putchr(format->opt_plus ? '+' : ' ');
			len++;
		}
		if (!format->opt_minus && len < format->min_len)
			ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - len);
		if (nbr < 0 && format->opt_zero)
			ft_putullong(-(unsigned long long int)nbr);
		else
			ft_putllong(nbr);
		if (format->opt_minus && len < format->min_len)
			ft_putspace(format->min_len - len);
	}
}
