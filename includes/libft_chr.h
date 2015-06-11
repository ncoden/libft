/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_chr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:52:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/11 17:38:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHR_H
# define LIBFT_CHR_H

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

int				ft_tolower(int c);
int				ft_toupper(int c);

int				ft_chrpos(const char *chrs, char c);
char			ft_chrswitch(const char *chrs, char c);

void			ft_putchr(char c);
void			ft_putchr_fd(char c, int fd);
void			ft_putnchr(char c, size_t n);
void			ft_putnchr_fd(char c, size_t n, int fd);
void			ft_putspace(size_t n);

#endif
