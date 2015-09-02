/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pairdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:59:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:16:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/pair.h"

void			ft_pairdel(t_pair *pair)
{
	if (pair)
	{
		if (pair->index)
			free(pair->index);
		free(pair);
	}
}
