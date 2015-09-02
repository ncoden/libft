/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:45:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 18:41:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

# include <stddef.h>
# include "libft/basics/booleans.h"

void			*ft_memalloc(size_t n);
void			*ft_memdup(const void *src, size_t n);
void			ft_memdel(void **mem);

void			*ft_memchr(const void *mem, char c, size_t n);
int				ft_memcmp(const void *b1, const void *b2, size_t n);
t_bool			ft_memequ(const void *b1, const void *b2, size_t n);

void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, char c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);

void			*ft_memset(void *mem, char c, size_t n);
void			ft_bzero(void *mem, size_t n);

#endif
