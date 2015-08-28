/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 12:19:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 19:00:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/basics/bits.h"

inline void		ft_bitset(void *bits, t_bitn n, t_bool value)
{
	if (value)
		((char *)bits)[n / 8] |= 1 << (n % 8);
	else
		((char *)bits)[n / 8] &= ~(1 << (n % 8));
}
