/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 09:38:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:46:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BIT_H
# define LIBFT_BIT_H

#include "libft/basics/booleans.h"

typedef unsigned char		t_bitn;

typedef unsigned char		t_bits;
typedef unsigned short int	t_16bits;
typedef unsigned int		t_32bits;
typedef double				t_64bits;

t_bool						ft_bitget(void *bits, t_bitn n);
void						ft_bitset(void *bits, t_bitn n, t_bool value);

#endif
