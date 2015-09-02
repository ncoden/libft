/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:43:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:28:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/chars.h"
#include "libft/basics/strings.h"

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
