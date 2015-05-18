/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 19:17:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmloop(t_trm *trm)
{
	char			*cmd;
	char			level;
	t_ilst_evnt		*sgnl_save;

	if (trm)
	{
		trm->level++;
		level = trm->level;
		sgnl_save = ft_sgnlget();
		ft_sgnlset(trm->on_signal);
		ft_trmset(trm);
		while (trm->level == level)
		{
			if ((cmd = ft_trmread()))
				ft_kevnttrigger(trm->on_key_press, cmd);
		}
		ft_sgnlset(sgnl_save);
	}
}
