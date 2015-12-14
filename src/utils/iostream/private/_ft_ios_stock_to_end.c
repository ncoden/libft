/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_ios_stock_to_end.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 13:53:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:32:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"
#include "libft/utils/buffer.h"
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"

static inline ssize_t	read_and_stock(t_ios *ios, void **mem, t_lst **stock)
{
	size_t				free_space;
	ssize_t				taken_space;

	free_space = ft_buffgetfree(&ios->_buff);
	if (free_space == 0)
	{
		if (!ft_lstpushback(stock, ios->_buff.begin))
			return (-1);
		if (!ft_buffalloc(&ios->_buff))
		{
			ft_lstdelback(stock, NULL);
			return (-1);
		}
		free_space = BUFFER_BUFF_SIZE;
	}
	if ((taken_space = read(ios->fd, ios->_buff.end, free_space)) == -1)
		return (-1);
	if (mem)
		*mem = ios->_buff.end;
	ios->_buff.end += taken_space;
	return (taken_space);
}

size_t					_ft_ios_stock_to_end(t_ios *ios, t_lst **stock,
							void *(*get_end)(void *mem, size_t size))
{
	size_t				i;
	void				*start;
	void				*end;
	ssize_t				size;

	i = 0;
	start = ios->_buff.begin + ios->_cursor;
	size = ft_buffgetused(&ios->_buff) - ios->_cursor;
	while ((end = (*get_end)(start, size)) == NULL)
	{
		i += size;
		if ((size = read_and_stock(ios, &start, stock)) <= 0)
			break;
	}
	if (size == -1 && i == 0)
		return (0);
	if (end != NULL)
		i += end - start;
	ios->end = (end != NULL);
	return (i);
}
