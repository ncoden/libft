/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skpnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 18:59:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:17:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"

t_bool			ft_skpnbr(char **cursor)
{
	t_bool	found;
	char	*lcursor;

	found = FALSE;
	lcursor = *cursor;
	if (*lcursor == '-' || *lcursor == '+')
		lcursor++;
	if (*lcursor >= '0' && *lcursor <= '9')
	{
		found = TRUE;
		lcursor++;
	}
	while (*lcursor >= '0' && *lcursor <= '9')
		lcursor++;
	*cursor = lcursor;
	return (found);
}
