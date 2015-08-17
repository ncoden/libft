/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 16:22:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 19:02:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_trmset(t_trm *trm)
{
	if (trm)
	{
		if (tcsetattr(ft_trmgetout(), TCSADRAIN, &trm->opts) != -1)
			return (1);
	}
	return (0);
}
