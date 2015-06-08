/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:46:38 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/08 19:25:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst			*ft_lstnew__(size_t size)
{
	t_lst		*new;

	if (!(new = (t_lst *)malloc(size)))
		return (NULL);
	new->next = NULL;
	return (new);
}
