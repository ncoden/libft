/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:43:55 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/18 11:46:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrleft(const char *s, size_t min_len)
{
	size_t		len;

	len = ft_strlen(s);
	ft_putstr(s);
	if (len < min_len)
		ft_putspace(min_len - len);
}
