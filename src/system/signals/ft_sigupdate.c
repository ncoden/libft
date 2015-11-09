/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigupdate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 02:16:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 18:27:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include "libft/system/signals.h"
#include "libft/system/signals/private.h"

void			ft_sigupdate(void)
{
	int32_t			mask;
	t_lst_sgnl_hook	*node;

	mask = 0;
	node = g_sgnl_hooks;
	while (node != NULL)
	{
		if (node->type == HOOK_SIG)
			mask |= 1 << ((t_hook_sig *)node->hook)->sig;
		else
			mask |= ((t_hook_sigs *)node->hook)->sigs;
		node = node->next;
	}
	sgnl_mask_set(mask);
}
