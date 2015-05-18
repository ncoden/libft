/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 01:42:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmloop(t_trm *trm)
{
	char			level;
	static char		buffer[256];
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
			if (read(0, buffer, 255))
				ft_kevnttrigger(trm->on_key_press, buffer);
		}
		ft_sgnlset(sgnl_save);
	}
}
