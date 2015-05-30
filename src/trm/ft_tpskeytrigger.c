/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tpskeytrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/30 16:09:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/30 16:21:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_tpskeytrigger(t_mt_tps *tps, char *key)
{
	if (!tps->trm->on_key)
		return (FALSE);
	while (tps)
	{
		if (ft_kesrctrigger(tps->trm->on_key, key, TYPE_TPS, tps))
			return (TRUE);
		tps = tps->father;
	}
	return (FALSE);
}
