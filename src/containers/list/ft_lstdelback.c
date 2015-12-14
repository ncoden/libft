/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:01:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/16 00:11:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void			ft_lstdelback(t_lst **alst, void (*del)(void *data))
{
	t_lst		*node;

	if ((node = ft_lstremback(alst)))
	{
		if (del)
			(*del)(node->data);
		free(node);
	}
}
