/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 14:55:56 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 18:20:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/system/signals.h"

void			ft_sigmove(t_hook_sig *hook, int sig)
{
	hook->sig = sig;
	ft_sigupdate();
}

void			ft_sigsmove(t_hook_sigs *hook, int32_t sigs)
{
	hook->sigs = sigs;
	ft_sigupdate();
}
