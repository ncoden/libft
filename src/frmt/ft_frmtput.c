/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 11:18:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/01 07:17:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtput(void *data, t_frmt *format)
{
	char		format_chr;

	if (data && format)
	{
		format_chr = format->format;
		if (format_chr == 'd' || format_chr == 'i')
			ft_frmtputd(*(long long int *)data, format);
	}
}
