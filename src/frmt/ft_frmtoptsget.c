/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frmtoptsget.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 04:54:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/06 05:01:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bits			ft_frmtoptsget(t_frmt *format)
{
	t_bits		opts;

	opts = (t_bits)0;
	if (format)
	{
		ft_bitset(&opts, 0, format->opt_alt);
		ft_bitset(&opts, 1, format->opt_zero);
		ft_bitset(&opts, 2, format->opt_minus);
		ft_bitset(&opts, 3, format->opt_space);
		ft_bitset(&opts, 4, format->opt_plus);
	}
	return (opts);
}
