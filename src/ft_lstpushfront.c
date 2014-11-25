/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:17:52 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/20 20:11:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushfront(t_list **alst, const void *content, size_t csize)
{
	t_list	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstnew(content, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstadd(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
