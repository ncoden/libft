/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 12:27:24 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/19 15:10:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrright(const char *s, size_t min_len)
{
	size_t		len;

	len = ft_strlen(s);
	if (len < min_len)
		ft_putspace(min_len - len);
	ft_putstr(s);
}
