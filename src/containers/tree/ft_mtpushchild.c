/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtpushchild.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 18:11:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:24:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/tree.h"

t_mt			*ft_mtpushchild(t_mt **amt, void *data, size_t size)
{
	t_mt		*new;

	if (!(new = ft_mtnew(data, size)))
		return (NULL);
	if (*amt)
		ft_mtaddchild(*amt, new);
	else
		*amt = new;
	return (new);
}
