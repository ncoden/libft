/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/30 15:50:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_mt_tps	*tps_start(t_trm *trm)
{
	t_mt_tps	*tps;
	t_mt_tps	*father;

	if (!(tps = (t_mt_tps *)ft_mtnew__(sizeof(t_mt_tps))))
		return (NULL);
	if ((father = (t_mt_tps *)ft_esrcget(TYPE_TPS)))
		ft_mtaddchild((t_mt *)father, (t_mt *)tps);
	else
		g_trm_tpss = tps;
	tps->father = father;
	tps->trm = trm;
	tps->status |= TRM_STACTIVE;
	return (tps);
}

static inline t_bool	trm_switch(t_mt_tps *tps)
{
	t_tdata				*esrc;

	ft_trmset(tps->trm);
	ft_sgnlspush(tps->trm->on_signal);
	if (!(esrc = ft_tdatanew(TYPE_TPS, tps)))
		return (FALSE);
	ft_sgnlesrcset(esrc);
	return (TRUE);
}

static inline t_bool	trm_restore(void)
{
	t_tdata				*esrc;
	t_tdata				*prev_tps;

	if ((esrc = ft_sgnlesrcget()))
		free(esrc);
	ft_sgnlspull();
	if ((prev_tps = ft_sgnlesrcget()))
		ft_trmset(((t_mt_tps *)prev_tps->data)->trm);
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
	t_mt_tps		*tps;
	char			*cmd;

	if (!(tps = tps_start(trm)))
		return (FALSE);
	if (trm->on_start != NULL)
		(*trm->on_start)(tps);
	if (!trm_switch(tps))
		return (FALSE);
	while (tps->status & TRM_STACTIVE)
	{
		tps->status |= TRM_STREADING;
		cmd = ft_read_trm();
		tps->status &= ~TRM_STREADING;
		if (cmd && !ft_strequ(cmd, ""))
			ft_kesrctrigger(trm->on_key_press, cmd, TYPE_TPS, tps);
	}
	if (!trm_restore())
		return (FALSE);
	if (trm->on_stop != NULL)
		(*trm->on_stop)(tps);
	if (!(tps_stop(tps)))
		return (FALSE);
	return (TRUE);
}
