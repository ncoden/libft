/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:38:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:57:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NUMBERS_H
# define LIBFT_NUMBERS_H

# include <stddef.h>

# define ABS(X) ((X > 0) ? X : -(X))
# define MAX(N, M) ((N > M) ? N : M)
# define MIN(N, M) ((N < M) ? N : M)
# define SIGN(X) ((X > 0) ? 1 : -1)
# define LIM(N, MN, MX) (MAX(MIN(N, MX), MN))
# define UPDIV(N, D) (((N - 1) / D) + 1)

int				ft_atoi(const char *str);
char			*ft_itoa(int n);

int				ft_min(int nbr1, int nbr2);
int				ft_max(int nbr1, int nbr2);
int				ft_power(int nbr, int power);
double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);

size_t			ft_nbrlen(int nbr);
size_t			ft_nbrbaselen(int nbr, int base);

size_t			ft_ptrlen(size_t nbr);
size_t			ft_ptrbaselen(size_t nbr, unsigned int base);

size_t			ft_llonglen(long long int nbr);
size_t			ft_llongbaselen(long long int nbr, int base);

size_t			ft_ullonglen(unsigned long long int nbr);
size_t			ft_ullongbaselen(unsigned long long int nbr, unsigned int base);

void			ft_putnbr(int nbr);
void			ft_putnbr_fd(int nbr, int fd);
void			ft_putnbrbase(int nbr, char base);
void			ft_putnbrbase(int nbr, int base);
void			ft_putnbrdigits(int nbr, const char *digits);


void			ft_putllong(long long int nbr);

void			ft_putullong(unsigned long long int nbr);

#endif
