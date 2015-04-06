/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_nbr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:38:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 14:02:34 by ncoden           ###   ########.fr       */
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
void			ft_putnbrleft(int nbr, size_t min_len);
void			ft_putnbrright(int nbr, size_t min_len);
void			ft_putnbrbase(int nbr, char base);
void			ft_putnbrdigits(int nbr, const char *digits);
void			ft_putnbrhex(int nbr);

void			ft_putptrbase(size_t nbr, unsigned char base);
void			ft_putptrdigits(size_t nbr, const char *digits);
void			ft_putptrhex(size_t nbr);

void			ft_putllong(long long int nbr);
void			ft_putllongbase(long long int nbr, char base);
void			ft_putllongdigits(long long int nbr, const char *digits);
void			ft_putllonghex(long long int nbr);

void			ft_putullong(unsigned long long int nbr);
void			ft_putullongbase(unsigned long long int nbr,
					unsigned char base);

#endif
