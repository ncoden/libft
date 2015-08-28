/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 23:25:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 15:50:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/klst.h"

void			ft_klstset(t_klst *lst, char *key, void *data, size_t size)
{
	lst->key = key;
	lst->data = data;
	if (data)
		lst->size = size;
	else
		lst->size = 0;
}
