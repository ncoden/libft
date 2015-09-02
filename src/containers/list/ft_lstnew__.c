/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:46:38 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:13:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

t_lst			*ft_lstnew__(size_t size)
{
	t_lst		*new;

	if (!(new = (t_lst *)malloc(size)))
		return (NULL);
	new->next = NULL;
	return (new);
}
