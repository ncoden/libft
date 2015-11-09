/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgnl_mask_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 01:16:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 18:28:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>
#include <signal.h>
#include "libft/system/signals/private.h"

void			sgnl_mask_set(int32_t mask)
{
	t_bool		hooked;
	t_bool		to_hook;
	int			i;
	int32_t		save;

	save = mask;
	i = 0;
	while (i < 32)
	{
		hooked = g_sgnl_mask & 1;
		to_hook = mask & 1;
		if (!hooked && to_hook)
			signal(i, &ft_sigtrigger);
		else if (hooked && !to_hook)
			signal(i, NULL);
		g_sgnl_mask >>= 1;
		mask >>= 1;
		i++;
	}
	g_sgnl_mask = save;
}
