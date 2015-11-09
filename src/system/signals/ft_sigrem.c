/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigrem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 02:16:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"
#include "libft/system/signals.h"
#include "libft/system/signals/private.h"

static t_bool		cmp_hook(t_lst *node, void *hook)
{
	return (((t_lst_sgnl_hook *)node)->hook == hook);
}

static inline void	remove_hook(void *hook)
{
	t_lst		*prev;
	t_lst		*node;

	if (!(node = ft_lstgetprev((t_lst *)g_sgnl_hooks, &cmp_hook, hook, &prev)))
		return ;
	if (prev)
		prev->next = node->next;
	else
		g_sgnl_hooks = g_sgnl_hooks->next;
	free(node);
	ft_sigupdate();
}

void				ft_sigrem(t_hook_sig *hook)
{
	remove_hook(hook);
}

void				ft_sigsrem(t_hook_sigs *hook)
{
	remove_hook(hook);
}
