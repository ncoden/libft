/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:50:08 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 15:55:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstshift(t_list **alst)
{
	t_list	*new_first;

	if (alst != NULL && *alst != NULL)
	{
		new_first = (*alst)->next;
		free(*alst);
		*alst = new_first;
	}
}
