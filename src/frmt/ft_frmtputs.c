/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 14:20:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t	get_len(char *str, t_frmt *format)
{
	if (str)
	{
		if (format->precision != -1)
		{
			if (format->format == 'S')
				return (ft_wstrnsize((wchar_t *)str, format->precision));
			else
				return (ft_strnlen(str, format->precision));
		}
		else
		{
			if (format->format == 'S')
				return (ft_wstrsize((wchar_t *)str));
			else
				return (ft_strlen(str));
		}
	}
	return (0);
}

size_t					ft_frmtputs(char *str, t_frmt *format)
{
	int			len;

	if (!format)
		return (0);
	if (!str)
	{
		if (format->format == 'S')
			str = (char *)L"(null)";
		else
			str = "(null)";
	}
	len = get_len(str, format);
	if (!format->opt_minus && len < format->min_len)
		ft_putnchr(format->opt_zero ? '0' : ' ', format->min_len - len);
	if (str)
	{
		if (format->format == 'S')
			ft_putnbwstr((wchar_t *)str, len);
		else
			write(1, str, len);
	}
	if (format->opt_minus && len < format->min_len)
		ft_putspace(format->min_len - len);
	return (MAX(len, format->min_len));
}
