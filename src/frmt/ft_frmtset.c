/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 07:59:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/01 07:17:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtset(t_frmt *format, char format_chr, int min_len,
					int precision)
{
	if (format)
	{
		format->format = format_chr;
		format->min_len = min_len;
		format->precision = precision;
	}
}
