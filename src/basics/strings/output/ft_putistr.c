/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putistr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:40:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:29:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/numbers.h"
#include "libft/basics/strings.h"

size_t			ft_putistr(const char *s)
{
	size_t		len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		write(1, s, len);
		return (len);
	}
	return (0);
}
