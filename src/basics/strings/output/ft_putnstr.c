/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:24:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:30:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/numbers.h"
#include "libft/basics/strings.h"

void	ft_putnstr(const char *str, size_t n)
{
	size_t		len;

	if (str != NULL)
	{
		len = ft_strlen(str);
		write (1, str, MIN(len, n));
	}
}
