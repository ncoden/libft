/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 18:59:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:16:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"

t_bool			ft_prsnbr(char **cursor, int *nbr)
{
	int		i;
	int		lnbr;
	char	*lcursor;
	t_bool	nbr_negative;

	i = 0;
	lnbr = 0;
	nbr_negative = FALSE;
	if (cursor && (lcursor = *cursor))
	{
		if (*lcursor == '-' || *lcursor == '+')
		{
			nbr_negative = (*lcursor == '-');
			lcursor++;
		}
		while (lcursor[i] >= '0' && lcursor[i] <= '9')
		{
			lnbr = lnbr * 10 + (lcursor[i] - '0');
			i++;
		}
		*nbr = nbr_negative ? -lnbr : lnbr;
		*cursor = &lcursor[i];
		return (i > 0);
	}
	return (FALSE);
}
