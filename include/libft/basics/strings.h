/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:47:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/11 21:43:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

# include <stddef.h>
# include "libft/basics/booleans.h"
# include "libft/containers/list.h"

char			*ft_strnew(size_t size);
void			ft_strdel(char **as);

size_t			ft_strlen(const char *s);
size_t			ft_strnlen(const char *s, size_t n);

int				ft_strcmp(const char *s1, const char *s2);
int				ft_strccmp(const char *s1, const char *s2, char c1, char c2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
t_bool			ft_strequ(const char *s1, const char *s2);
t_bool			ft_strnequ(const char *s1, const char *s2, size_t n);

char			*ft_strchr(const char *s, char c);
char			*ft_strrchr(const char *s, char c);
char			*ft_strstr(const char *s, const char *search);
char			*ft_strnstr(const char *s, const char *search, size_t n);
void			ft_strreplace(char *s, char search, char replace);

void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

void			ft_strclr(char *s);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *dst, const char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
char			*ft_strncat(char *dst, const char *src, size_t n);

char			*ft_strdup(const char *s);
char			*ft_strsub(const char *s, size_t start, size_t n);
char			*ft_strtrim(const char *s);

char			*ft_strjoin(const char *s1, const char *s2);
char			**ft_strdiv(char *s, char c);
char			**ft_strsplit(const char *s, char c);

void			ft_putstr(const char *s);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putnstr(const char *s, size_t n);
void			ft_putendl(const char *s);
void			ft_putendl_fd(const char *s, int fd);

#endif
