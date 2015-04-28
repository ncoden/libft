/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 13:56:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_frmtputc(wchar_t c, t_frmt *format)
{
	if (format)
	{
		if (!format->opt_minus && format->min_len > 1)
			ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - 1);
		if (format->format == 'C')
			ft_putwchr(c);
		else
			ft_putchr((char)c);
		if (format->opt_minus && format->min_len > 1)
			ft_putspace(format->min_len - 1);
	}
}
