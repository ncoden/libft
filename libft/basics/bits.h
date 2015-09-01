/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 09:38:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/30 19:48:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @file			bits.h
** @brief			Bits management functions
**
** Functions to set and get a bit in a byte
*/

#ifndef LIBFT_BITS_H
# define LIBFT_BITS_H

# include "libft/basics/booleans.h"

typedef unsigned char		t_bitn;

typedef unsigned char		t_bits;
typedef unsigned short int	t_16bits;
typedef unsigned int		t_32bits;
typedef double				t_64bits;

/**
** @brief			Get the value or the \p n bit in a given byte
** @param bits		Byte containing the bit
** @param n			Bit index to read
** @return			The \p n bit value
*/
t_bool						ft_bitget(const void *bits, t_bitn n);

/**
** @brief			Set the \p n bit in a given byte
** @param bits		Byte containing the bit
** @param n			Bit index to set
** @param value		New value of the bit
*/
void						ft_bitset(void *bits, t_bitn n, t_bool value);

#endif
