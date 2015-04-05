/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 12:23:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtput(void *data, t_frmt *format)
{
	char		c;

	if (format)
	{
		c = format->format;
		if (data)
		{
			if (c == 'd' || c == 'D' || c == 'i')
				ft_frmtputd(*(long long int *)data, format);
			else if (c == 'o' || c == 'O')
				ft_frmtputo(*(unsigned long long int *)data, format);
			else if (c == 's' || c == 'S')
				ft_frmtputs((char *)data, format);
			else if (c == 'x' || c == 'X')
				ft_frmtputx(*(unsigned long long int *)data, format);
		}
		if (c == 'p')
			ft_frmtputp((size_t)data, format);
	}
}
