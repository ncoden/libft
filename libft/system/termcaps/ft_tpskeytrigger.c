/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tpskeytrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/30 16:09:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:59:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/system/termcaps.h"
#include "libft/utils/events.h"

t_bool			ft_tpskeytrigger(t_mt_tps *tps, char *key)
{
	if (!tps->trm->on_key)
		return (FALSE);
	if (!tps->trm->inherit_key)
		return (ft_kesrctrigger(tps->trm->on_key, key, TYPE_TPS, tps));
	while (tps)
	{
		if (ft_kesrctrigger(tps->trm->on_key, key, TYPE_TPS, tps))
			return (TRUE);
		tps = tps->father;
	}
	return (FALSE);
}
