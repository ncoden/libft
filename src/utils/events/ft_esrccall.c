/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_esrccall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:44:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/types.h"
#include "libft/utils/events.h"

void			ft_esrccall(t_evnt *event, t_type esrc_type, void *esrc_data)
{
	ft_esrcset(esrc_type, esrc_data);
	event->func(event->data);
	ft_esrcrem();
}
