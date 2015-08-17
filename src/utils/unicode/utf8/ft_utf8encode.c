/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8encode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:19:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:11:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_utf8					*ft_utf8encode(const wchar_t *wstr)
{
	size_t		i;
	size_t		size;
	size_t		len;
	wchar_t		c;
	t_utf8		*utf8;

	if (wstr)
	{
		len = ft_wstrsize_utf8(wstr);
		if (len > 0 && (utf8 = (t_utf8 *)malloc(sizeof(t_utf8) * (len + 1))))
		{
			i = 0;
			while (i < len)
			{
				c = ft_utf8chrencode(*wstr);
				size = ft_wchrsize_utf8(c);
				ft_memcpy(&utf8[i], &c, size);
				i += size;
				wstr++;
			}
			utf8[i] = '\0';
			return (utf8);
		}
	}
	return (NULL);
}
