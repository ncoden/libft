/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 16:40:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/26 18:13:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mt			*ft_mtnew(void *data, size_t size)
{
	t_mt		*new;

	if (!(new = (t_mt *)malloc(sizeof(t_mt))))
		return (NULL);
	new->next = NULL;
	new->child = NULL;
	new->data = data;
	if (data)
		new->size = size;
	else
		new->size = 0;
	return (new);
}
