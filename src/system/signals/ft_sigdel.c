/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/08 22:44:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/system/signals.h"

void			ft_sigdel(t_hook_sig *hook, void (*del)(void *))
{
	ft_sigrem(hook);
	if (del)
		(*del)(hook->event);
	free(hook);
}

void			ft_sigsdel(t_hook_sigs *hook, void (*del)(void *))
{
	ft_sigsrem(hook);
	if (del)
		(*del)(hook->callback);
	free(hook);
}
