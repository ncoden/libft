/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:10:56 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:36:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memsub(const void *b, unsigned int start, size_t len)
{
	size_t		i;
	const char	*view;
	char		*new_b;

	i = 0;
	view = b;
	new_b = (char *)ft_memalloc(len);
	if (new_b == NULL)
		return (NULL);
	while (i < len)
	{
		new_b[i] = view[start + i];
		i++;
	}
	return (new_b);
}
