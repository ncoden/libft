/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 14:25:06 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 18:43:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATHS_H
# define LIBFT_MATHS_H

# include <stddef.h>

# define ABS(X)			((X > 0) ? X : -(X))
# define MAX(N, M)		((N > M) ? N : M)
# define MIN(N, M)		((N < M) ? N : M)
# define SIGN(X)		((X > 0) ? 1 : -1)
# define LIM(N, MN, MX)	(MAX(MIN(N, MX), MN))
# define UPDIV(N, D)	(((N - 1) / D) + 1)

int					ft_nbrmin(int n1, int n2);
int					ft_nbrmax(int n1, int n2);

long long			ft_llongmin(long long n1, long long n2);
long long			ft_llongmax(long long n1, long long n2);

unsigned long long	ft_ullongmin(unsigned long long n1,
								unsigned long long n2);
unsigned long long	ft_ullongmax(unsigned long long n1,
								unsigned long long n2);

size_t				ft_sizemin(size_t n1, size_t n2);
size_t				ft_sizemax(size_t n1, size_t n2);

int					ft_nbrmod(int n1, int n2);
int					ft_nbrpow(int nbr, int power);

#endif
