/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pairnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:31:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:16:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/strings.h"
#include "libft/containers/pair.h"

t_pair			*ft_pairnew(char *index, void *data)
{
	t_pair		*new;

	if (index && data)
	{
		if ((new = (t_pair *)malloc(sizeof(t_pair))))
		{
			if ((new->index = ft_strdup(index)))
			{
				new->data = data;
				return (new);
			}
			ft_pairdel(new);
		}
	}
	return (NULL);
}
