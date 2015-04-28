/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 07:52:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 12:43:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_frmt			*ft_frmtnew(char format, int min_len, int precision,
					t_bits options)
{
	t_frmt		*new;

	if ((new = (t_frmt *)malloc(sizeof(t_frmt))))
	{
		new->format = format;
		new->min_len = min_len;
		new->precision = precision;
		ft_frmtoptsset(new, options);
	}
	return (new);
}
