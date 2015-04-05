/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:27:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 17:43:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrright(const char *str, size_t min_len)
{
	size_t		len;

	if (str)
	{
		len = ft_strlen(str);
		if (len < min_len)
			ft_putspace(min_len - len);
		if (len > 0)
			write (1, str, len);
	}
}
