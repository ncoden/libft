/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:38:54 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 18:05:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NUMBERS_H
# define LIBFT_NUMBERS_H

# include <stddef.h>

int				ft_atoi(const char *str);
char			*ft_itoa(int nbr);

unsigned int	ft_nbrlen(int nbr);
unsigned int	ft_nbrbaselen(int nbr, int base);

void			ft_putnbr(int nbr);
void			ft_putnbr_fd(int nbr, int fd);
void			ft_putnbrbase(int nbr, int base);
void			ft_putnbrdigits(int nbr, const char *digits);

unsigned int	ft_sizelen(size_t nbr);
unsigned int	ft_sizebaselen(size_t nbr, unsigned int base);
void			ft_putsize(size_t nbr);

unsigned int	ft_llonglen(long long nbr);
unsigned int	ft_llongbaselen(long long nbr, int base);
void			ft_putllong(long long nbr);

unsigned int	ft_ullonglen(unsigned long long nbr);
unsigned int	ft_ullongbaselen(unsigned long long nbr, unsigned int base);
void			ft_putullong(unsigned long long nbr);

#endif
