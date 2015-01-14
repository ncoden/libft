/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3dline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:34:45 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:13:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print3dline(t_3denv *e, t_3dpos *from, t_3dpos *to, int color)
{
	t_2dpos	from2d;
	t_2dpos	to2d;

	ft_3dto2dpos(e, from, &from2d);
	ft_3dto2dpos(e, to, &to2d);
	ft_printline((t_env *)e, &from2d, &to2d, color);
}
