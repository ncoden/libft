/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigtrigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 22:46:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 02:45:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"
#include "libft/system/signals.h"
#include "libft/system/signals/private.h"
#include "libft/utils/callback.h"
#include "libft/utils/events.h"

void			ft_sigtrigger(int sig)
{
	int32_t			mask;
	t_lst_sgnl_hook	*node;

	mask = 1 << (sig - 1);
	node = g_sgnl_hooks;
	while (node != NULL)
	{
		if (node->type == HOOK_SIG)
		{
			if (((t_hook_sig *)node->hook)->sig == sig)
				ft_evntcall(((t_hook_sig *)node->hook)->event);
		}
		else
		{
			if (((t_hook_sigs *)node->hook)->sigs & mask)
				ft_cbcall(((t_hook_sigs *)node->hook)->callback, &sig);
		}
		node = node->next;
	}
}
