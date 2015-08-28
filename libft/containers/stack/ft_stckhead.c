/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckhead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 20:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:20:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/stack.h"

void			*ft_stckhead(t_stck *stck)
{
	if (stck->count > 0)
		return (stck->datas[stck->head - 1]);
	return (NULL);
}
