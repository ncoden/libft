/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sdatanew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:22:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:32:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/types.h"

t_sdata			*ft_sdatanew(size_t size, void *data)
{
	t_sdata		*new;

	if ((new = (t_sdata *)malloc(sizeof(t_sdata))))
	{
		new->size = size;
		new->data = data;
		return (new);
	}
	return (NULL);
}
