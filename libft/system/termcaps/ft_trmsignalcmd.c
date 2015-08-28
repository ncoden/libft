/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmsignalcmd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/14 17:12:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:13:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/system/termcaps.h"

void			ft_trmsignalcmd(t_trm *trm, char sig, char *tc_cmd)
{
	if (trm && tc_cmd)
		ft_trmsignalhook(trm, sig, (void (*)(void *))&ft_trmputcmd, tc_cmd);
}
