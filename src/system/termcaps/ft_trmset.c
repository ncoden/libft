/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 16:22:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:13:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <term.h>
#include "libft/basics/booleans.h"
#include "libft/system/termcaps.h"

t_bool			ft_trmset(t_trm *trm)
{
	if (trm)
	{
		if (tcsetattr(ft_trmgetout(), TCSADRAIN, &trm->opts) != -1)
			return (1);
	}
	return (0);
}
