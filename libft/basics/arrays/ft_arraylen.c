/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 11:34:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 17:39:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t			ft_arraylen(void *array)
{
	size_t		size;

	size = 0;
	while (((void **)array)[size] != NULL)
		size++;
	return (size);
}
