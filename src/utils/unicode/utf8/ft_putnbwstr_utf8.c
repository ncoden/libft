/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbwstr_utf8.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:29:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:30:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/unicode.h"

void			ft_putnbwstr_utf8(const wchar_t *s, size_t byte_nbr)
{
	size_t		i;

	if (s)
	{
		i = 0;
		while (*s != '\0' && i < byte_nbr)
		{
			i += ft_wchrsize_utf8(*s);
			if (i <= byte_nbr)
				ft_putwchr_utf8(*s);
			s++;
		}
	}
}
