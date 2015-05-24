/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:51:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 16:04:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstinsert(t_klst **dst, t_klst *src)
{
	t_klst		*cpy;
	t_klst		*node;
	t_klst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if (!(cpy = ft_memdup(src, sizeof(t_klst))))
			return (NULL);
		if ((node = ft_klstadd(dst, cpy)))
			ft_klstadd(&diff, node);
		src = src->next;
	}
	return (diff);
}
