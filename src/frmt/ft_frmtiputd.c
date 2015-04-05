/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:12:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 06:57:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputd(long long int nbr, t_frmt *format)
{
	int		len;

	if (format)
	{
		len = ft_llonglen(nbr);
		if (nbr >= 0)
		{
			if (format->opt_plus)
				ft_putchr('+');
			else if (format->opt_space)
				ft_putchr(' ');
			len++;
		}
		if (!format->opt_minus && len < format->min_len)
			ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - len);
		ft_putllong(nbr);
		if (format->opt_minus && len < format->min_len)
			ft_putspace(format->min_len - len);
		return (MAX(len, format->min_len));
	}
	return (0);
}
