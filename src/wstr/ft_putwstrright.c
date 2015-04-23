/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstrright.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:27:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 17:56:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstrright(const wchar_t *wstr, size_t min_len)
{
	size_t		len;

	if (wstr)
	{
		len = ft_wstrlen(wstr);
		if (len < min_len)
			ft_putspace(min_len - len);
		if (len > 0)
			ft_putwstr(wstr);
	}
}
