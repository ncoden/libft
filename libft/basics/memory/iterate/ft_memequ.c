/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:03:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 19:20:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"

t_bool			ft_memequ(const void *b1, const void *b2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((char *)b1)[i] != ((char *)b2)[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
