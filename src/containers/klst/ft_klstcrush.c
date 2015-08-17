/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstcrush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 16:31:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 16:10:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_klstcrush(t_klst **dst, t_klst *src, void (*func)(t_klst *))
{
	t_klst		*node;

	while (src != NULL)
	{
		if ((node = ft_klstadd(dst, src)))
			(*func)(node);
		src = src->next;
	}
}
