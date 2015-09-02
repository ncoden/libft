/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmrestore.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 20:05:26 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:12:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/system/termcaps.h"
#include "libft/utils/events.h"

t_bool			ft_trmrestore(t_mt_tps *tps)
{
	if (!(ft_trmset(tps->trm)))
		return (FALSE);
	if (tps->trm->on_restore)
		ft_esrccall(tps->trm->on_restore, TYPE_TPS, tps);
	return (TRUE);
}
