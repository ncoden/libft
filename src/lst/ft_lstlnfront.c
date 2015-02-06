/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstlnfront(t_lst **alst, void *content, size_t csize)
{
	t_lst	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstln(content, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstaddfront(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
