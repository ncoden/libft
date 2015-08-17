/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 10:57:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtput(void *data, t_frmt *format)
{
	char		c;

	if (format)
	{
		c = format->format;
		if (data)
		{
			if (c == 'c' || c == 'C')
				return (ft_frmtputc(*(wchar_t *)data, format));
			else if (c == 'd' || c == 'D' || c == 'i')
				return (ft_frmtputd(*(long long int *)data, format));
			else if (c == 'o' || c == 'O')
				return (ft_frmtputo(*(unsigned long long int *)data, format));
			else if (c == 'u' || c == 'U')
				return (ft_frmtputu(*(unsigned long long int *)data, format));
			else if (c == 'x' || c == 'X')
				return (ft_frmtputx(*(unsigned long long int *)data, format));
		}
		if (c == 'p')
			return (ft_frmtputp((size_t)data, format));
		else if (c == 's' || c == 'S')
			return (ft_frmtputs((char *)data, format));
	}
	return (0);
}
