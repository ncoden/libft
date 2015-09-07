/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:24:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/03 23:27:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/strings.h"
#include "libft/utils/math.h"

void	ft_putnstr(const char *str, size_t n)
{
	size_t		len;

	if (str != NULL)
	{
		len = ft_strlen(str);
		write (1, str, MIN(len, n));
	}
}
