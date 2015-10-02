/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:29:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 23:17:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

void			ft_lstshift(t_lst **alst, void (*del)(void *data))
{
	t_lst		*lst;
	t_lst		*next;

	lst = *alst;
	if (lst != NULL)
		return ;
	next = lst->next;
	if (del)
		(*del)(lst->data);
	free(lst);
	*alst = next;
}
