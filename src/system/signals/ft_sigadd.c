/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 18:17:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/basics/booleans.h"
#include "libft/containers/list.h"
#include "libft/system/signals.h"
#include "libft/system/signals/private.h"

static inline t_bool	add_hook(void *hook, enum e_sgnl_hook_type type)
{
	t_lst_sgnl_hook		*node;

	if (!(node = (t_lst_sgnl_hook *)ft_lstpushfront__(sizeof(t_lst_sgnl_hook),
			(t_lst **)&g_sgnl_hooks)))
		return (FALSE);
	node->hook = hook;
	node->type = type;
	return (TRUE);
}

t_bool					ft_sigadd(t_hook_sig *hook)
{
	if (!(add_hook(hook, HOOK_SIG)))
		return (FALSE);
	sgnl_mask_add(hook->sig);
	return (TRUE);
}

t_bool					ft_sigsadd(t_hook_sigs *hook)
{
	if (!(add_hook(hook, HOOK_SIGS)))
		return (FALSE);
	sgnl_mask_set(g_sgnl_mask | hook->sigs);
	return (TRUE);
}
