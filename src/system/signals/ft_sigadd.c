/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 14:28:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/basics/booleans.h"
#include "libft/containers/list.h"
#include "libft/system/signals.h"
#include "libft/system/signals/private.h"

static inline t_bool	add_hook(void *hook, enum e_sgnl_hook_type type,
							int32_t mask)
{
	t_lst_sgnl_hook		*node;

	if (!(node = (t_lst_sgnl_hook *)ft_lstpushfront__(sizeof(t_lst_sgnl_hook),
			(t_lst **)&g_sgnl_hooks)))
		return (FALSE);
	node->hook = hook;
	node->type = type;
	sgnl_set_mask(mask);
	return (TRUE);
}

t_bool					ft_sigadd(t_hook_sig *hook)
{
	return (add_hook(hook, HOOK_SIG, (g_sgnl_mask | 1 << (hook->sig - 1))));
}

t_bool					ft_sigsadd(t_hook_sigs *hook)
{
	return (add_hook(hook, HOOK_SIGS, (g_sgnl_mask | hook->sigs)));
}
