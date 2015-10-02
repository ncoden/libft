/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:40:48 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:28:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstaddfront(t_lst **alst, t_lst *node)
{
	if (alst != NULL)
	{
		node->next = *alst;
		*alst = node;
	}
}
