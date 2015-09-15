/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 14:25:06 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/15 21:50:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# define ABS(X)			((X > 0) ? X : -(X))
# define MAX(N, M)		((N > M) ? N : M)
# define MIN(N, M)		((N < M) ? N : M)
# define SIGN(X)		((X > 0) ? 1 : -1)
# define LIM(N, MN, MX)	(MAX(MIN(N, MX), MN))
# define UPDIV(N, D)	(((N - 1) / D) + 1)

int				ft_min(int n1, int n2);
int				ft_max(int n1, int n2);

int				ft_mod(int n1, int n2);
int				ft_power(int nbr, int power);

double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);

#endif
