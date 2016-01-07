/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 15:05:20 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 19:04:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/maths.h"

inline int					ft_nbrmin(int n1, int n2)
{
	return ((n1 < n2) ? n1 : n2);
}

inline long long			ft_llongmin(long long n1, long long n2)
{
	return ((n1 < n2) ? n1 : n2);
}

inline unsigned long long	ft_ullongmin(unsigned long long n1,
								unsigned long long n2)
{
	return ((n1 < n2) ? n1 : n2);
}

inline size_t				ft_sizemin(size_t n1, size_t n2)
{
	return ((n1 < n2) ? n1 : n2);
}
