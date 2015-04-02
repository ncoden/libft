/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_uni.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 17:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/02 19:42:35 by ncoden           ###   ########.fr       */
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

typedef unsigned char		t_utf8;
typedef unsigned int		t_utf8chr;

typedef unsigned short		t_utf16;
typedef unsigned int		t_utf32;

t_utf8chr					ft_utf8chrencode(unsigned int c);
char						ft_utf8chrsize(t_utf8chr c);

#endif
