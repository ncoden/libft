/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/08 22:28:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/system/signals.h"

t_hook_sig		*ft_signew(int sig, t_evnt *event)
{
	t_hook_sig	*hook;

	if (!(hook = (t_hook_sig *)malloc(sizeof(t_hook_sig))))
		return (NULL);
	hook->sig = sig;
	hook->event = event;
	return (hook);
}

t_hook_sigs		*ft_sigsnew(int32_t sigs, t_cb *callback)
{
	t_hook_sigs	*hook;

	if (!(hook = (t_hook_sigs *)malloc(sizeof(t_hook_sigs))))
		return (NULL);
	hook->sigs = sigs;
	hook->callback = callback;
	return (hook);
}
