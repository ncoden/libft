/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:27:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:28:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/chars.h"
#include "libft/basics/strings.h"

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
