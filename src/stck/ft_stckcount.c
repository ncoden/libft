/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 20:14:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 20:16:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stckcount(t_stck *stck)
{
	int			count;

	count = 0;
	while (stck->next != NULL)
	{
		count += stck->count;
		stck = stck->next;
	}
	return (count);
}
