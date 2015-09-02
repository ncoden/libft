/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 17:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:59:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UNICODE_H
# define LIBFT_UNICODE_H

# include <stddef.h>
# include "libft/basics/booleans.h"

# define UNI_UNKNOW			(-1)
# define UNI_UTF8			(1)
# define UNI_UTF16			(2)
# define UNI_UTF32			(3)

# define UTF8_BEM_MASK1		(0x00)
# define UTF8_BEM_MASK2		(0xC080)
# define UTF8_BEM_MASK3		(0xE08080)
# define UTF8_BEM_MASK4		(0xF0808080)

# define UTF8_LEM_MASK1		(0x00)
# define UTF8_LEM_MASK2		(0x80C0)
# define UTF8_LEM_MASK3		(0x8080E0)
# define UTF8_LEM_MASK4		(0x808080F0)

# define UTF8_SUBCHR		(0x1A)

# define UTF8_BITSNBR1		(7)
# define UTF8_BITSNBR2		(11)
# define UTF8_BITSNBR3		(16)
# define UTF8_BITSNBR4		(21)

typedef char				t_utf8;
typedef short				t_utf16;
typedef int					t_utf32;

char						ft_getunicode();
t_bool						ft_setunicode(char format);

char						ft_utf8chrsize(wchar_t c);
wchar_t						ft_utf8chrencode(wchar_t c);

t_utf8						*ft_utf8encode(const wchar_t *wstr);
void						ft_utf8wencode(wchar_t *wstr);

char						ft_wchrsize_utf8(wchar_t c);
size_t						ft_wstrsize_utf8(const wchar_t *str);
size_t						ft_wstrnsize_utf8(const wchar_t *str, size_t n);

void						ft_putwchr_utf8(wchar_t c);

void						ft_putwstr_utf8(const wchar_t *s);
void						ft_putnwstr_utf8(const wchar_t *s, size_t n);
void						ft_putnbwstr_utf8(const wchar_t *s,
								size_t byte_nbr);

#endif
