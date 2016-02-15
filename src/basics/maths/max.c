/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 15:07:58 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 19:04:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/maths.h"

inline int					ft_nbrmax(int n1, int n2)
{
	return ((n1 > n2) ? n1 : n2);
}

inline long long			ft_llongmax(long long n1, long long n2)
{
	return ((n1 > n2) ? n1 : n2);
}

inline unsigned long long	ft_ullongmax(unsigned long long n1,
								unsigned long long n2)
{
	return ((n1 > n2) ? n1 : n2);
}

inline size_t				ft_sizemax(size_t n1, size_t n2)
{
	return ((n1 > n2) ? n1 : n2);
}
