/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushiter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/02 23:36:10 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/03 00:09:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst			*ft_lstpushiter(t_lst **begin, t_lst **iterator, t_lst *data)
{
	t_lst		*node;

	if (!(node = ft_lstnew(data)))
		return (NULL);
	if (*begin == NULL)
		*begin = node;
	else
		(*iterator)->next = node;
	*iterator = node;
	return (node);
}
