/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntstop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 21:33:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 22:33:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/utils/events.h"
#include "libft/utils/events/private.h"

void			ft_evntstop(void)
{
	g_evnt_propagate = FALSE;
}
