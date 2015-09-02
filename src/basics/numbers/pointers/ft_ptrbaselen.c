/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrbaselen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:43:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_ptrbaselen(size_t ptr, unsigned int base)
{
	size_t		len;

	len = 1;
	while (ptr >= base)
	{
		ptr /= base;
		len++;
	}
	return (len);
}
