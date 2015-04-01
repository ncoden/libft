/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtiput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/01 07:20:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_frmtiput(void *data, t_frmt *format)
{
	char		format_chr;

	if (data && format)
	{
		format_chr = format->format;
		if (format_chr == 'd' || format_chr == 'i')
			return (ft_frmtiputd(*(long long int *)data, format));
	}
	return (0);
}
