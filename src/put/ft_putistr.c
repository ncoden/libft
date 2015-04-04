/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putistr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:40:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 17:05:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
