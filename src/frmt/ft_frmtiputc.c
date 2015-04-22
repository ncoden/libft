/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/22 14:40:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputc(wchar_t c, t_frmt *format)
{
	if (!format)
		return (0);
	if (!format->opt_minus && format->min_len > 1)
		ft_putspace(format->min_len - 1);
	if (format->format == 'C')
		ft_putwchr(c);
	else
		ft_putchr((char)c);
	if (format->opt_minus && format->min_len > 1)
		ft_putspace(format->min_len - 1);
	return (MAX(1, format->min_len));
}
