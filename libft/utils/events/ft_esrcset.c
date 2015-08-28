/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_esrcset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:27:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:47:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/booleans.h"
#include "libft/basics/types.h"
#include "libft/containers/stack.h"
#include "libft/utils/events.h"

t_bool			ft_esrcset(t_type type, void *data)
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
