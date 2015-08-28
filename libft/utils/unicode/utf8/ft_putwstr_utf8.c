/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_utf8.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:29:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:33:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/unicode.h"

void			ft_putwstr_utf8(const wchar_t *wstr)
{
	if (wstr)
	{
		while (*wstr != '\0')
		{
			ft_putwchr_utf8(*wstr);
			wstr++;
		}
	}
}
