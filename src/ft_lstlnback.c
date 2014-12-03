/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:34:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlnback(t_list **alst, void *content, size_t csize)
{
	t_list	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstln(content, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstaddback(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
