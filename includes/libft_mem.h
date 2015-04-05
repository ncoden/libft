/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:45:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 16:54:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H

# include "libft_core.h"

t_bool			ft_getendian();

void			*ft_memalloc(size_t size);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memdup(const void *src, size_t size);
size_t			ft_memlen(void *mem, size_t memsize);
int				ft_memequ(const void *b1, const void *b2, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memsub(const void *b, unsigned int start, size_t len);

#endif