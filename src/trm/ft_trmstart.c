/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:48:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_mt_tps		*start_tps(t_trm *trm)
{
	t_mt_tps	*tps;
	t_mt_tps	*father;

	if (!(tps = (t_mt_tps *)ft_mtnew__(sizeof(t_mt_tps))))
		return (NULL);
	if ((father = (t_mt_tps *)ft_esrcget(TYPE_TPS)))
	{
		ft_mtaddchild((t_mt *)father, (t_mt *)tps);
		tps->father = father;
	}
	else
	{
		g_trm_tpss = tps;
		tps->father = NULL;
	}
	tps->trm = trm;
	return (tps);
}

static void			trigger_cmd(t_mt_tps *tps, char *cmd)
{
	t_klst_evnt		*evnt;

	if ((evnt = (t_klst_evnt *)ft_klstget((t_klst *)tps->trm->on_key_press,
		cmd)))
	{
		if (evnt->event.func == NULL)
		{
			if (evnt->event.data == TRM_TPSSTOP)
				ft_trmstop(tps);
		}
		else
			ft_esrccall(&evnt->event, TYPE_TPS, tps);
	}
}

void				ft_trmstart(t_trm *trm)
{
	t_mt_tps		*tps;
	char			*cmd;

	if (trm)
	{
		tps = start_tps(trm);
		if (trm->on_start != NULL)
			(*trm->on_start)(tps);
		tps->status = TRM_STACTIVE;
		ft_trmset(trm);
		ft_sgnlspush(trm->on_signal);
		while (tps->status == TRM_STACTIVE)
		{
			if ((cmd = ft_read_trm()))
				trigger_cmd(tps, cmd);
		}
		ft_sgnlspull();
	}
}
