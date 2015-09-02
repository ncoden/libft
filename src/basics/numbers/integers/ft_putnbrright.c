/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:27:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:36:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/chars.h"
#include "libft/basics/numbers.h"

void		ft_putnbrright(int nbr, size_t min_len)
{
	size_t		len;

	len = ft_nbrlen(nbr);
	if (len < min_len)
		ft_putspace(min_len - len);
	ft_putnbr(nbr);
}
