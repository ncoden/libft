/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 18:27:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiputs(char *str, t_frmt *format)
{
	int			len;

	if (str && format)
	{
		if (format->format == 'S')
			len = ft_wstrlen((wchar_t *)str);
		else
			len = ft_strlen(str);
		if (format->precision >= 0)
			len = MIN(len, format->precision);
		if (!format->opt_minus && len < format->min_len)
			ft_putspace(format->min_len - len);
		if (format->format == 'S')
			ft_putnwstr((wchar_t *)str, len);
		else
			write (1, str, len);
		if (format->opt_minus && len < format->min_len)
			ft_putspace(format->min_len - len);
		return (MAX(len, format->min_len));
	}
	return (0);
}
