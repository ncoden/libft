/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 11:38:19 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/28 15:40:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_memlen(void *mem, size_t memsize)
{
	size_t	size;

	size = 0;
	while (((char *)mem)[size] != '\0')
		size++;
	return (size / memsize);
}
