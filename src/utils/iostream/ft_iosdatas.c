/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosdatas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 18:46:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:35:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/booleans.h"
#include "libft/utils/buffer.h"
#include "libft/utils/iostream.h"

t_bool			ft_iosdatas(t_ios *ios)
{
	ssize_t		copied;

	if (ft_buffgetused(&ios->_buff) > ios->_cursor)
		return (TRUE);
	copied = read(ios->fd, ios->_buff.end, ft_buffgetfree(&ios->_buff));
	if (copied > 0)
	{
		ios->_buff.end += copied;
		return (TRUE);
	}
	return (FALSE);
}
