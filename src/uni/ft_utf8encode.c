/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8encode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:19:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 16:46:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t	utf8_str_len(const wchar_t *wstr)
{
	char		size;
	int			len;

	len = 0;
	while (*wstr != '\0')
	{
		size = ft_wchrbin(*wstr);
		if (size <= UTF8_BITSNBR1)
			len += 1;
		else if (size <= UTF8_BITSNBR2)
			len += 2;
		else if (size <= UTF8_BITSNBR3)
			len += 3;
		else if (size <= UTF8_BITSNBR4)
			len += 4;
		wstr++;
	}
	return (len);
}

t_utf8					*ft_utf8encode(const wchar_t *wstr)
{
	size_t		i;
	size_t		size;
	size_t		len;
	wchar_t		c;
	t_utf8		*utf8;

	if (wstr)
	{
		len = utf8_str_len(wstr);
		if (len > 0 && (utf8 = (t_utf8 *)malloc(sizeof(t_utf8) * (len + 1))))
		{
			i = 0;
			while (i < len)
			{
				c = ft_utf8chrencode(*wstr);
				size = ft_utf8chrsize(c);
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
