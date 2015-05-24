/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstinsert__.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:51:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 16:00:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstinsert__(size_t size, t_ilst **dst, t_ilst *src)
{
	t_ilst		*cpy;
	t_ilst		*diff;

	diff = NULL;
	while (src != NULL)
	{
		if (!(cpy = ft_memdup(src, size)))
			return (NULL);
		ft_ilstadd(&diff, ft_ilstadd(dst, cpy));
		src = src->next;
	}
	return (diff);
}
