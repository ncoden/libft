/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:45:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 19:05:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/memory.h"

void			*ft_memdup(const void *src, size_t n)
{
	void		*cpy;

	if (!(cpy = malloc(n)))
		return (NULL);
	ft_memcpy(cpy, src, n);
	return (cpy);
}
