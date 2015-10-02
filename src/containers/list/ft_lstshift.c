/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:50:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:11:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void			ft_lstshift(t_lst **alst)
{
	t_lst		*new_first;

	if (*alst != NULL)
	{
		new_first = (*alst)->next;
		free(*alst);
		*alst = new_first;
	}
}
