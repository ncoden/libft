/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:47:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 17:06:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

# include "libft_lst.h"

char			*ft_strnew(size_t size);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *str, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strccpy(char *dst, const char *src, char c, size_t n);
size_t			ft_stricpy(char *dest, const char *src);
void			ft_strdel(char **as);
char			**ft_strdiv(char *s, char c);
char			*ft_strdup(const char *src);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strdjoin(const char *s1, const char *d, const char *s2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *dest, const char *src, size_t nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t size);
char			*ft_strrchr(const char *str, int c);
char			**ft_strsplit(const char *s, char c);
t_lst			*ft_strsplit_tolst(const char *s, char c);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strtrim(const char *s);

#endif