/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:10:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtputs(char *str, t_frmt *format)
{
	int			len;

	if (!str)
		ft_putstr("(null)");
	if (format && str)
	{
		if (format->format == 'S')
			len = ft_wstrsize((wchar_t *)str);
		else
			len = ft_strlen(str);
		if (format->precision >= 0)
			len = MIN(len, format->precision);
		if (!format->opt_minus && len < format->min_len)
			ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - len);
		if (format->format == 'S')
			ft_putnwstr((wchar_t *)str, len);
		else
			write (1, str, len);
		if (format->opt_minus && len < format->min_len)
			ft_putspace(format->min_len - len);
	}
}
