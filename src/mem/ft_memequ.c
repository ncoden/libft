/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:03:01 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:35:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memequ(const void *b1, const void *b2, size_t size)
{
	size_t		i;
	const char	*view1;
	const char	*view2;

	i = 0;
	view1 = b1;
	view2 = b2;
	while (i < size)
	{
		if (view1[i] != view2[i])
			return (0);
		i++;
	}
	return (1);
}
