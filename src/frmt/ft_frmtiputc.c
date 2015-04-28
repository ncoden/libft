/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:09:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputc(wchar_t c, t_frmt *format)
{
	char		len;

	if (!format)
		return (0);
	if (format->format == 'C')
		len = ft_wchrsize(c);
	else
		len = 1;
	if (!format->opt_minus && format->min_len > len)
		ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - len);
	if (format->format == 'C')
		ft_putwchr(c);
	else
		ft_putchr((char)c);
	if (format->opt_minus && format->min_len > len)
		ft_putspace(format->min_len - len);
	return (MAX(format->min_len, len));
}
