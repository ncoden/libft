/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllonghex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 20:01:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:42:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/numbers.h"

void			ft_putllonghex(long long int nbr)
{
	ft_putllongdigits(nbr, "0123456789ABCDEF");
}
