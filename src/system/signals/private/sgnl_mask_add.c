/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgnl_mask_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 01:16:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 18:27:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <signal.h>
#include "libft/system/signals/private.h"

void			sgnl_mask_add(int sig)
{
	if (!(g_sgnl_mask & (1 << sig)))
		signal(sig, &ft_sigtrigger);
}
