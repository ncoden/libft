/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_esrcget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:40:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 13:01:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	find_esrc(t_tdata *esrc, t_type *type)
{
	if (esrc->type == *type)
		return (TRUE);
	return (FALSE);
}

void			*ft_esrcget(t_type type)
{
	t_tdata		*esrc;

	if (!type)
		esrc = ft_stckhead(g_evnt_esrcs);
	else
		esrc = (t_tdata *)ft_stcksrc(g_evnt_esrcs,
			(t_bool (*)(void *, void *))&find_esrc, &type);
	if (esrc)
		return (esrc->data);
	return (NULL);
}
