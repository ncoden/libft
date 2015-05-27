/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntesrcset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:27:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 11:33:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_evntesrcset(t_type type, void *data)
{
	t_tdata		*tdata;

	if ((tdata = ft_tdatanew(type, data)))
	{
		if (ft_stckpush(&g_evnt_esrcs, tdata))
			return (TRUE);
		free(tdata);
	}
	return (FALSE);
}
