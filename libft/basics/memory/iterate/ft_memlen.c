/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 11:38:19 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:30:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_memlen(void *mem, size_t memsize)
{
	size_t	size;

	size = 0;
	while (((char *)mem)[size] != '\0')
		size++;
	return (size / memsize);
}
