/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckwhile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/25 17:41:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_stckwhile(t_stck *stck, t_bool (*func)(void *))
{
	int			count;

	while (stck != NULL)
	{
		count = stck->count;
		while (count > 0)
		{
			if (!(*func)(stck->datas[count]))
				return (FALSE);
			count--;
		}
	}
	return (TRUE);
}
