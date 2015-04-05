/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 10:38:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiput(void *data, t_frmt *format)
{
	char		c;

	if (format)
	{
		c = format->format;
		if (data)
		{
			if (c == 'd' || c == 'D' || c == 'i')
				return (ft_frmtiputd(*(long long int *)data, format));
			else if (c == 'o' || c == 'O')
				return (ft_frmtiputo(*(unsigned long long int *)data, format));
			else if (c == 's' || c == 'S')
				return (ft_frmtiputs((char *)data, format));
			else if (c == 'x' || c == 'X')
				return (ft_frmtiputx(*(unsigned long long int *)data, format));
		}
		if (c == 'p')
			return (ft_frmtiputp((size_t)data, format));
	}
	return (0);
}
