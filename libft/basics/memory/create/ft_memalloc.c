/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 07:50:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/31 19:04:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/memory.h"

void			*ft_memalloc(size_t n)
{
	void		*mem;

	if (!(mem = malloc(n)))
		return (NULL);
	ft_bzero(mem, n);
	return (mem);
}
