/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstinsert__.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:51:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:06:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/klst.h"

t_klst			*ft_klstinsert__(size_t size, t_klst **dst, t_klst *src)
{
	t_klst		*cpy;
	t_klst		*node;
	t_klst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if (!(cpy = ft_memdup(src, size)))
			return (NULL);
		if ((node = ft_klstadd(dst, cpy)))
			ft_klstadd(&diff, node);
		src = src->next;
	}
	return (diff);
}
