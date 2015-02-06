/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prschrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 19:21:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/06 05:13:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bits			*ft_prschrs(char **cursor, const char *chrs)
{
	t_bits		*counts;
	char		*found;
	char		*lcursor;

	if (chrs && cursor && (lcursor = *cursor))
	{
		if ((counts = (t_bits *)ft_memalloc(ft_strlen(chrs))))
		{
			while ((found = ft_strchr(chrs, *lcursor)))
			{
				ft_bitset(counts, (t_bitn)(found - chrs), 1);
				lcursor++;
			}
			*cursor = lcursor;
			return (counts);
		}
	}
	return (NULL);
}
