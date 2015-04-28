/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 19:31:07 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 19:43:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_3denvprint(t_3denv *e)
{
	t_tlst		*view;

	if (e)
	{
		ft_bzero(e->img.buff, sizeof(int) * e->cam->view.x * e->cam->view.y);
		view = e->obj;
		while (view != NULL)
		{
			if (view->type == T_3DLINE)
				ft_print3dline(e, (t_3dline *)view->content);
			view = view->next;
		}
		ft_3denvupdate(e);
	}
}
