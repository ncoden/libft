/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_put.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 19:12:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 17:46:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PUT_H
# define LIBFT_PUT_H

void	ft_putchar(char c);
void	ft_putnchar(char c, size_t n);
void	ft_putspace(size_t n);

void	ft_putstr(const char *s);
size_t	ft_putistr(const char *s);
void	ft_putnstr(const char *s, size_t n);
void	ft_putstrleft(const char *s, size_t min_len);
void	ft_putstrright(const char *s, size_t min_len);
void	ft_putendl(const char *s);

void	ft_putnbr(int nbr);
void	ft_putnbrleft(int nbr, size_t min_len);
void	ft_putnbrright(int nbr, size_t min_len);

void	ft_putlong(long int nbr);
void	ft_putllong(long long int nbr);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int nbr, int fd);

#endif
