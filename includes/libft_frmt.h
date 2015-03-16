/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_frmt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 15:29:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/03/16 10:59:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FRMT_H
# define LIBFT_FRMT_H

# include "libft.h"

typedef struct			s_frmt
{
	int			min_len;
	int			precision;
	char		format;

	t_bool		opt_alt : 1;
	t_bool		opt_zero : 1;
	t_bool		opt_minus : 1;
	t_bool		opt_space : 1;
	t_bool		opt_plus : 1;
}						t_frmt;

typedef long long			t_long;
typedef unsigned long long	t_ulong;

t_bits					ft_frmtoptsget(t_frmt *format);
void					ft_frmtoptsset(t_frmt *format, t_bits opts);

#endif
