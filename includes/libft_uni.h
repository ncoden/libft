/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_uni.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 17:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 16:48:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UNI_H
# define LIBFT_UNI_H

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

wchar_t						ft_utf8chrencode(wchar_t c);
char						ft_utf8chrsize(wchar_t c);

t_utf8						*ft_utf8encode(const wchar_t *wstr);
void						ft_utf8wencode(wchar_t *wstr);

#endif
