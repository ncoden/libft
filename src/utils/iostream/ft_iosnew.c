/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/05 10:37:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/iostream.h"
#include "libft/utils/buffer.h"

t_ios			*ft_iosnew(int fd)
{
	t_ios		*ios;

	if (!(ios = (t_ios *)malloc(sizeof(t_ios))))
		return (NULL);
	if (!ft_buffalloc(&ios->_buff))
	{
		free(ios);
		return (NULL);
	}
	ios->_cursor = 0;
	ios->fd = fd;
	ios->end = FALSE;
	return (ios);
}
