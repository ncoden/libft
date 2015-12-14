/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_ios_read_to_end.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:43:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:31:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "libft/utils/buffer.h"
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"
#include "libft/utils/math.h"

ssize_t			_ft_ios_read_to_end(t_ios *ios, void *dst, size_t n,
					void *(*get_end)(void *mem, size_t size))
{
	ssize_t		i;
	void		*end;
	ssize_t		ret;

	n = ft_sizemin(n, SSIZE_MAX);
	i = ft_sizemin(ft_buffgetused(&ios->_buff) - ios->_cursor, n);
	if ((end = get_end(ios->_buff.begin + ios->_cursor, i)) != NULL)
		i = end - (ios->_buff.begin + ios->_cursor);
	_ft_ios_copy_buff(ios, dst, i);
	while (i < (ssize_t)n && !end)
	{
		ret = read(ios->fd, &dst[i], ft_sizemin(n - i, BUFFER_BUFF_SIZE));
		if (ret < 0 && i == 0)
			return (-1);
		else if (ret <= 0)
			break;
		if ((end = get_end(&dst[i], ret)) != NULL)
			ret = end - &dst[i];
		i += ret;
	}
	ios->end = (end != NULL);
	return (i);
}
