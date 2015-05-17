/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 22:00:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 22:08:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmloop(t_trm *trm)
{
	char			buffer[256];
	t_ilst_evnt		*sgnl_save;

	if (trm)
	{
		sgnl_save = ft_sgnlget();
		ft_sgnlset(trm->on_signal);
		ft_trmset(trm);
		while (42)
		{
			if (read(0, buffer, 255))
				ft_kevnttrigger(trm->on_key_press, buffer);
		}
	}
}