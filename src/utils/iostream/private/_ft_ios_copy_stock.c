/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_ios_copy_stock.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:05:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:20:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"
#include "libft/utils/iostream.h"
#include "libft/utils/math.h"

size_t			_ft_ios_copy_stock(t_ios *ios, t_lst *stock, void *dst,
					size_t n)
{
	size_t		i;
	size_t		size;

	i = 0;
	while (i < n && stock != NULL)
	{
		size = BUFFER_BUFF_SIZE - ios->_cursor;
		ft_memcpy(&dst[i], stock->data + ios->_cursor,
			ft_sizemin(size, n - i));
		ios->_cursor = 0;
		ft_lstshift(&stock, &free);
		i += size;
	}
	if (i == n)
		ios->_cursor = size;
	return (i);
}
