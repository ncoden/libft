/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 09:38:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/06 15:59:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BIT_H
# define LIBFT_BIT_H

typedef unsigned char		t_bitn;

typedef unsigned char		t_bits;
typedef unsigned short int	t_16bits;
typedef unsigned long int	t_32bits;
typedef double				t_64bits;

inline t_bool				ft_bitget(void *bits, t_bitn n);
inline void					ft_bitset(void *bits, t_bitn n, t_bool value);

#endif
