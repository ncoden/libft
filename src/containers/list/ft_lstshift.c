/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:50:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:36:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void			ft_lstshift(t_lst **alst)
{
	t_lst		*next;

	if (*alst != NULL)
	{
		next = (*alst)->next;
		free(*alst);
		*alst = next;
	}
}
