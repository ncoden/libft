/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/06 15:51:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_mt_tps	*tps_start(t_trm *trm, t_mt_tps *tps_father)
{
	t_mt_tps			*tps;

	if (!(tps = (t_mt_tps *)ft_mtnew__(sizeof(t_mt_tps))))
		return (NULL);
	if (tps_father)
		ft_mtaddchild((t_mt *)tps_father, (t_mt *)tps);
	else
		g_trm_tpss = tps;
	tps->father = tps_father;
	tps->trm = trm;
	tps->status |= TRM_STACTIVE;
	return (tps);
}

static inline t_tdata	*trm_switch(t_mt_tps *tps)
{
	t_tdata				*esrc;

	ft_trmset(tps->trm);
	if (tps->trm->inherit_signal)
		ft_sgnlspush(tps->trm->on_signal);
	else
		ft_sgnlset(tps->trm->on_signal);
	if (!(esrc = ft_tdatanew(TYPE_TPS, tps)))
		return (NULL);
	ft_sgnlesrcset(esrc);
	return (esrc);
}

static inline t_bool	trm_restore(t_trm *trm, t_mt_tps *tps_father,
							t_tdata *esrc)
{
	free(esrc);
	if (trm->inherit_signal)
		ft_sgnlspull();
	else
		ft_sgnlunset();
	if (tps_father)
		ft_trmset(tps_father->trm);
	return (TRUE);
}

static inline t_bool	tps_stop(t_mt_tps *tps)
{
	if (tps->father)
		tps->father->child = NULL;
	free(tps);
	return (TRUE);
}

t_bool					ft_trmstart(t_trm *trm)
{
	t_tdata				*esrc;
	t_mt_tps			*tps;
	t_mt_tps			*tps_father;
	char				*cmd;

	tps_father = (t_mt_tps *)ft_esrcget(TYPE_TPS);
	if (!(tps = tps_start(trm, tps_father)))
		return (FALSE);
	if (trm->on_start != NULL)
		(*trm->on_start)(tps);
	if (!(esrc = trm_switch(tps)))
		return (FALSE);
	while (tps->status & TRM_STACTIVE)
	{
		tps->status |= TRM_STREADING;
		cmd = ft_read_trm();
		tps->status &= ~TRM_STREADING;
		if (cmd && !ft_strequ(cmd, ""))
			ft_tpskeytrigger(tps, cmd);
	}
	if (!trm_restore(tps->trm, tps_father, esrc))
		return (FALSE);
	if (trm->on_stop != NULL)
		(*trm->on_stop)(tps);
	if (!(tps_stop(tps)))
		return (FALSE);
	return (TRUE);
}
