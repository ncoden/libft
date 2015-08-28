/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtaddnext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 18:11:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:23:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/containers/tree.h"

void			ft_mtaddnext(t_mt *mt, t_mt *new)
{
	if (mt->next)
		new->next = mt->next;
	mt->next = new;
}
