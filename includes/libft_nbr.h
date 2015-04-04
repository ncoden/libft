/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_nbr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:38:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 20:08:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

# define ABS(X) ((X > 0) ? X : -(X))
# define MAX(N, M) ((N > M) ? N : M)
# define MIN(N, M) ((N < M) ? N : M)
# define SIGN(X) ((X > 0) ? 1 : -1)
# define LIM(N, MN, MX) (MAX(MIN(N, MX), MN))
# define UPDIV(N, D) (((N - 1) / D) + 1)

size_t			ft_nbrlen(int nbr);
size_t			ft_longlen(long int nbr);
size_t			ft_llonglen(long long int nbr);

int				ft_min(int nbr1, int nbr2);
int				ft_max(int nbr1, int nbr2);
int				ft_power(int nbr, int power);
double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);

void			ft_putnbrbase(int nbr, char *base);
void			ft_putnbrhex(int nbr);
void			ft_putllongbase(long long int nbr, char *base);
void			ft_putllonghex(long long int nbr);

#endif
