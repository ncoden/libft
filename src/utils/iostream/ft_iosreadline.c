/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosreadline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:36:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:27:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/memory.h"
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"

static void 	*line_end(void *mem, size_t size)
{
	void		*end_s;
	void		*end_l;

	if ((end_s = ft_memchr(mem, '\0', size)) != NULL)
		size = end_s - mem;
	if ((end_l = ft_memchr(mem, '\n', size)) != NULL)
		return (end_l);
	return (end_s);
}

ssize_t			ft_iosreadline(t_ios *ios, char *dst, size_t n)
{
	ssize_t		size;

	if ((size = _ft_ios_read_to_end(ios, dst, n, &line_end)) == -1)
		return (-1);
	dst[size] = '\0';
	return (size);
}
