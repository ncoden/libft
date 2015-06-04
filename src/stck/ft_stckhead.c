/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckhead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 20:11:03 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/01 17:46:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_stckhead(t_stck *stck)
{
	if (stck->count > 0)
		return (stck->datas[(stck->count % stck->size) - 1]);
	return (NULL);
}
