/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstinsert__.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:51:02 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/19 17:58:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstinsert__(size_t size, t_ilst **dst, t_ilst *src)
{
	t_ilst		*dup;

	while (src != NULL)
	{
		if (!(dup = ft_memdup(src, size)))
			return (NULL);
		ft_lstaddback((t_lst **)dst, (t_lst *)dup);
		src = src->next;
	}
	return (*dst);
}