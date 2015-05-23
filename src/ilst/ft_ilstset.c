/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 23:25:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:27:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_ilstset(t_ilst *lst, int index, void *data, size_t size)
{
	lst->index = index;
	lst->data = data;
	if (data)
		lst->size = size;
	else
		lst->size = 0;
}
