/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/07 11:33:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/chars.h"
#include "libft/basics/numbers.h"

void			ft_putllong(long long nbr)
{
	if (nbr < 0)
	{
		ft_putchr('-');
		ft_putullong(-nbr);
	}
	else
		ft_putullong(nbr);
}
