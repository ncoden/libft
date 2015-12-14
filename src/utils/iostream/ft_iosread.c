/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosread.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 18:46:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:36:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"
#include "libft/utils/math.h"

ssize_t			ft_iosread(t_ios *ios, void *dst, size_t n)
{
	size_t		i;
	ssize_t		ret;

	i = _ft_ios_copy_buff(ios, dst, n);
	ret = -1;
	while (i < n)
	{
		if (!(ret = read(ios->fd, &dst[i],
			ft_sizemin(n - i, BUFFER_BUFF_SIZE))))
			break;
		if (ret == -1 && i == 0)
			return (-1);
		i += ret;
	}
	ios->end = (ret == 0);
	return (i);
}
