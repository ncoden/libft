/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:43:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 17:43:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrleft(const char *str, size_t min_len)
{
	size_t		len;

	if (str)
	{
		len = ft_strlen(str);
		if (len > 0)
			write (1, str, len);
		if (len < min_len)
			ft_putspace(min_len - len);
	}
}
