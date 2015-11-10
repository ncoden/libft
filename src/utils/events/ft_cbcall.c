/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbcall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/10 02:02:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/utils/events.h"
#include "libft/utils/events/private.h"

t_bool			ft_cbcall(t_cb *callback, void *res)
{
	t_bool		save;
	t_bool		ret;

	save = g_evnt_propagate;
	g_evnt_propagate = TRUE;
	callback->func(callback->data, res);
	ret = g_evnt_propagate;
	g_evnt_propagate = save;
	return (ret);
}
