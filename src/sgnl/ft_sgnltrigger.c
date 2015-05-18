/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnltrigger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 16:04:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnltrigger(char sig)
{
	t_ilst_evnt	*lst;

	if (g_sgnl)
	{
		if ((lst = (t_ilst_evnt *)ft_ilstget((t_ilst *)g_sgnl, sig)))
			lst->event.func(lst->event.data);
	}
}
