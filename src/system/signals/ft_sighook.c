/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sighook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/08 22:41:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/events.h"
#include "libft/utils/callback.h"
#include "libft/system/signals.h"

t_hook_sig		*ft_sighook(int sig, t_evnt *event)
{
	t_hook_sig	*hook;

	if (!(hook = ft_signew(sig, event)))
		return (NULL);
	if (!(ft_sigadd(hook)))
	{
		free(hook);
		return (NULL);
	}
	return (hook);
}

t_hook_sigs		*ft_sigshook(int32_t sigs, t_cb *callback)
{
	t_hook_sigs	*hook;

	if (!(hook = ft_sigsnew(sigs, callback)))
		return (NULL);
	if (!(ft_sigsadd(hook)))
	{
		free(hook);
		return (NULL);
	}
	return (hook);
}
