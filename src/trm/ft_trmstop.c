/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 01:27:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/30 00:18:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_trmstop(t_mt_tps *tps)
{
	if (tps || (tps = ft_esrcget(TYPE_TPS)))
	{
		if (tps->status & TRM_STREADING)
			ft_trmclosein();
		tps->status = 0;
		return (TRUE);
	}
	return (FALSE);
}
