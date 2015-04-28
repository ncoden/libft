/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3dline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:34:45 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 15:12:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print3dline(t_3denv *e, t_3dline *line)
{
	t_2dline	line2d;

	ft_3dto2dpos(e, &line->from, &line2d.from);
	ft_3dto2dpos(e, &line->to, &line2d.to);
	line2d.color = line->color;
	ft_print2dline((t_2denv *)e, &line2d);
}
