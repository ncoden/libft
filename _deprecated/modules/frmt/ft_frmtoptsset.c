/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtoptsset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 04:46:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/06 05:08:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_frmtoptsset(t_frmt *format, t_bits opts)
{
	if (format)
	{
		format->opt_alt = ft_bitget(&opts, 0);
		format->opt_zero = ft_bitget(&opts, 1);
		format->opt_minus = ft_bitget(&opts, 2);
		format->opt_space = ft_bitget(&opts, 3);
		format->opt_plus = ft_bitget(&opts, 4);
	}
}
