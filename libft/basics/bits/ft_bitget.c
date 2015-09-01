/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 10:47:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/30 17:48:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/basics/bits.h"

inline t_bool	ft_bitget(const void *bits, t_bitn n)
{
	return ((((char *)bits)[n / 8] >> (n % 8)) & 1);
}
