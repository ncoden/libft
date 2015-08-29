/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:52:22 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:56:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @file chars.h
** @brief      C chars management functions
**
** Functions to test, transform and print the C native chars.
*/

#ifndef LIBFT_CHARS_H
# define LIBFT_CHARS_H

# include <stddef.h>

/**
** @brief      Test if the character is alphabetic or numeric
** @param      c     Character to test
** @return     Return TRUE if the character is alphabetic or numeric, FALSE
**             otherwise.
**
** Test if the character is alphabetic (between 'a' and 'z', or 'A' and 'Z'
** inclusive), or numeric (between '0' and '9' inclusive)
*/
int				ft_isalnum(int c);

/**
** @brief      Test if the character is alphabetic
** @param      c     Character to test
** @return     Return TRUE if the character is alphabetic, FALSE otherwise.
**
** Test if the character is alphabetic (between 'a' and 'z', or 'A' and 'Z'
** inclusive)
*/
int				ft_isalpha(int c);

/**
** @brief      Test if the character is a digit
** @param      c     Character to test
** @return     Return TRUE if the character is a digit, FALSE otherwise.
**
** Test if the character is a digit (between '0' and '9' inclusive)
*/
int				ft_isdigit(int c);

/**
** @brief      Test if the character is valid standard ASCII char
** @param      c     Character to test
** @return     Return TRUE if the character is in the ASCII table, FALSE
**             otherwise.
**
** Test if the character is in the standard ASCII table (between the 0 and the
** 127th character inclusive)
*/
int				ft_isascii(int c);

/**
** @brief      Test if the character is printable
** @param      c     Character to test
** @return     Return TRUE if the character can be printed, FALSE otherwise.
**
** Test if the character can be printed. A character that can't be printed
** displays nothing on output.
*/
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
