/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_npairnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:31:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:16:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/pair.h"

t_npair			*ft_npairnew(int index, void *data)
{
	t_npair		*new;

	if (data)
	{
		if ((new = (t_npair *)malloc(sizeof(t_npair))))
		{
			new->index = index;
			new->data = data;
			return (new);
		}
	}
	return (NULL);
}
