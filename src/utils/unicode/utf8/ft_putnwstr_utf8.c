/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr_utf8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:29:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:30:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/unicode.h"

void			ft_putnwstr_utf8(const wchar_t *s, size_t n)
{
	size_t		i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0' && i < n)
		{
			ft_putwchr_utf8(s[i]);
			i++;
		}
	}
}
