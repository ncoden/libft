/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_frmt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 15:29:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 18:42:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FRMT_H
# define LIBFT_FRMT_H

# include "libft.h"
# include "libft_pair.h"

typedef struct	s_frmt
{
	int			min_len;
	int			precision;
	char		format;

	t_bool		opt_alt : 1;
	t_bool		opt_zero : 1;
	t_bool		opt_minus : 1;
	t_bool		opt_space : 1;
	t_bool		opt_plus : 1;
}				t_frmt;

t_frmt			*ft_frmtnew(char format, int min_len, int precision,
					t_bits options);
void			ft_frmtset(t_frmt *format, char format_chr,
					int min_len, int precision);
t_bits			ft_frmtoptsget(t_frmt *format);
void			ft_frmtoptsset(t_frmt *format, t_bits opts);

void			ft_frmtput(void *data, t_frmt *format);
void			ft_frmtputd(long long int nbr, t_frmt *format);
void			ft_frmtputs(char *str, t_frmt *format);

size_t			ft_frmtiput(void *data, t_frmt *format);
size_t			ft_frmtiputd(long long int nbr, t_frmt *format);
size_t			ft_frmtiputx(unsigned long long int nbr, t_frmt *format);
size_t			ft_frmtiputs(char *str, t_frmt *format);

#endif
