/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:47:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/03 23:58:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

# include <stddef.h>
# include "libft/containers/list.h"

char			*ft_strnew(size_t size);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *str, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strccmp(const char *s1, const char *s2, char c);
char			*ft_strcpy(char *dest, const char *src);
void			ft_strdel(char **as);
char			**ft_strdiv(char *s, char c);
char			*ft_strdup(const char *src);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(const char *s1, const char *s2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *s, size_t n);
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *dest, const char *src, size_t nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t size);
char			*ft_strrchr(const char *str, int c);
char			**ft_strsplit(const char *s, char c);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strtrim(const char *s);

void			ft_putstr(const char *s);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putnstr(const char *s, size_t n);
void			ft_putendl(const char *s);
void			ft_putendl_fd(const char *s, int fd);

void			ft_strreplace(char *s, char search, char replace);

#endif
