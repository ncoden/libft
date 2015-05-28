/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/28 19:52:50 by ncoden           ###   ########.fr       */
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

static t_ilst_evnt	*build_sgnls(t_mt_tps *tps, t_ilst_evnt **esrcs)
{
	t_ilst_evnt		*lsgnls;
	t_ilst_evnt		*lesrcs;

	lsgnls = (t_ilst_evnt *)ft_lstdup__(sizeof(t_ilst_evnt),
		(t_lst *)tps->trm->on_signal);
	lesrcs = NULL;
	tps = tps->father;
	while (tps != NULL)
	{
		if (!(ft_ilstfill__(sizeof(t_ilst_evnt), (t_ilst **)&lsgnls,
			(t_ilst *)tps->trm->on_signal)))
			return (NULL);
		tps = tps->father;
	}
	*esrcs = lesrcs;
	return (lsgnls);
}

void				ft_trmstart(t_trm *trm)
{
	t_mt_tps		*tps;
	char			*cmd;
	t_ilst_evnt		*sgnls;
	t_ilst_evnt		*esrcs;
	t_ilst_evnt		*save_sgnl;

	if (trm)
	{
		save_sgnl = ft_sgnlget();
		tps = start_tps(trm);
		if (trm->on_start != NULL)
			(*trm->on_start)(tps);
		sgnls = build_sgnls(tps, &esrcs);
		tps->status = TRM_STACTIVE;
		ft_trmset(trm);
		ft_sgnlset(sgnls);
		while (tps->status == TRM_STACTIVE)
		{
			if ((cmd = ft_read_trm()))
			{
				ft_esrcset(TYPE_TPS, tps);
				ft_kevnttrigger(trm->on_key_press, cmd);
				ft_esrcrem();
			}
		}
		ft_sgnlset(save_sgnl);
	}
}
