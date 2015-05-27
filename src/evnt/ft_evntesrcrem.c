/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntesrcrem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:27:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 11:40:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_evntesrcrem(t_type type)
{
	t_tdata		*tdata;

	if ((tdata = (t_tdata *)ft_stckhead(g_evnt_esrcs)))
	{
		if (tdata->type == type)
		{
			ft_stckshift(&g_evnt_esrcs);
			return (TRUE);
		}
	}
	return (FALSE);
}
