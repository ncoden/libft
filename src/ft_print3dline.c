/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3dline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:34:45 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 21:13:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print3dline(t_env3d *e, t_pos3d *from, t_pos3d *to, int color)
{
	ft_printline((t_env *)e, ft_3dto2dpos(e, from), ft_3dto2dpos(e, to), color);
}
