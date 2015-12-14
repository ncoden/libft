/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_ios_copy_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:25:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:20:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/memory.h"
#include "libft/utils/buffer.h"
#include "libft/utils/iostream.h"
#include "libft/utils/math.h"

size_t			_ft_ios_copy_buff(t_ios *ios, void *dst, size_t n)
{
	size_t		i;
	size_t		in_buff;

	in_buff = ft_buffgetused(&ios->_buff) - ios->_cursor;
	i = ft_sizemin(in_buff, n);
	ft_memcpy(dst, ios->_buff.begin + ios->_cursor, i);
	if (n < in_buff)
		ios->_cursor += n;
	else
	{
		ft_buffclr(&ios->_buff);
		ios->_cursor = 0;
	}
	return (i);
}
