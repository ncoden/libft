/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_chr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:52:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 13:31:26 by ncoden           ###   ########.fr       */
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

void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putnchar(char c, size_t n);
void			ft_putspace(size_t n);

#endif
