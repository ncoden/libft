/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/01 07:57:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiput(void *data, t_frmt *format)
{
	char		c;

	if (data && format)
	{
		c = format->format;
		if (c == 'd' || c == 'i')
			return (ft_frmtiputd(*(long long int *)data, format));
		else if (c == 's' || c == 'S')
			return (ft_frmtiputs((char *)data, format));
	}
	return (0);
}
