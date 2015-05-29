/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckilstget.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 19:27:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 19:28:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_stckilstget(t_stck *stck, int index)
{
	t_ilst		*ilst;
	int			count;

	while (stck != NULL)
	{
		count = stck->count;
		while (count > 0)
		{
			count--;
			if ((ilst = ft_ilstget(stck->datas[count], index)))
				return (ilst);
		}
		stck = stck->next;
	}
	return (NULL);
}
