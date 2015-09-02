/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsichrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 19:21:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:16:18 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/basics/strings.h"

unsigned int	*ft_prsichrs(char **cursor, const char *chrs)
{
	unsigned int	*counts;
	char			*found;

	if (chrs && cursor && *cursor)
	{
		if ((counts = (unsigned int *)ft_memalloc(ft_strlen(chrs) *
				sizeof(unsigned int))))
		{
			while ((found = ft_strchr(chrs, **cursor)))
			{
				counts[found - chrs]++;
				(*cursor)++;
			}
			return (counts);
		}
	}
	return (NULL);
}
