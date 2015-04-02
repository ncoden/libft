/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8chrencode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:41:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/02 19:31:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_utf8chr		bem_encode(unsigned int c, char size)
{
	if (size <= 11)
		return ((((c >> 6) << 27) >> 19) | ((c << 26) >> 26) | UTF8_BEM_MASK2);
	else if (size <= 16)
		return ((((c >> 12) << 28) >> 12) | (((c >> 6) << 26) >> 18)
		| ((c << 26) >> 26) | UTF8_BEM_MASK3);
	else if (size <= 21)
		return ((((c >> 18) << 29) >> 5) | (((c >> 12) << 26) >> 10)
		| (((c >> 6) << 26) >> 18) | ((c << 26) >> 26) | UTF8_BEM_MASK4);
	else
		return (UTF8_SUBCHR);
}

static inline t_utf8chr		lem_encode(unsigned int c, char size)
{
	if (size <= 11)
		return (((c << 21) >> 27) | ((c << 26) >> 18) | UTF8_LEM_MASK2);
	else if (size <= 16)
		return (((c << 16) >> 28) | (((c >> 6) << 26) >> 18)
		| ((c << 26) >> 10) | UTF8_LEM_MASK3);
	else if (size <= 21)
		return (((c << 11) >> 29) | (((c >> 12) << 26) >> 18)
		| (((c >> 6) << 26) >> 10) | ((c << 26) >> 2) | UTF8_LEM_MASK4);
	else
		return (UTF8_SUBCHR);
}

t_utf8chr					ft_utf8chrencode(unsigned int c)
{
	char		size;
	t_bool		endian;

	size = ft_wchrbin(c);
	if (size <= 7)
		return (c & 0b01111111);
	endian = ft_getendian();
	if (endian)
		return (bem_encode(c, size));
	else
		return (lem_encode(c, size));
	return (c);
}
