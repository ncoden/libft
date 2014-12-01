/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3dline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:34:45 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/01 16:59:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print3dline(t_env3d *e, t_pos3d *from, t_pos3d *to, int color)
{
	t_pos	from2d;
	t_pos	to2d;

	ft_3dto2dpos(e, from, &from2d);
	ft_3dto2dpos(e, to, &to2d);
	ft_printline((t_env *)e, &from2d, &to2d, color);
}
