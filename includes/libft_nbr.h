/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_nbr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:38:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 16:55:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

# define ABS(X) ((X > 0) ? X : -(X))
# define MAX(N, M) ((N > M) ? N : M)
# define MIN(N, M) ((N < M) ? N : M)
# define SIGN(X) ((X > 0) ? 1 : -1)
# define LIM(N, MN, MX) (MAX(MIN(N, MX), MN))

size_t			ft_nbrlen(int nbr);
int				ft_min(int nbr1, int nbr2);
int				ft_max(int nbr1, int nbr2);
int				ft_power(int nbr, int power);
double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);

#endif
