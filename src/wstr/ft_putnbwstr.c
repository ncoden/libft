/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 19:32:56 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:05:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbwstr(const wchar_t *s, size_t byte_nbr)
{
	char		unicode;

	if (s)
	{
		unicode = ft_getunicode();
		if (unicode == UNI_UTF8)
			ft_putnbwstr_utf8(s, byte_nbr);
	}
}
