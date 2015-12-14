/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosreadstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:24:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:27:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/memory.h"
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"

static void 	*str_end(void *mem, size_t size)
{
	return (ft_memchr(mem, '\0', size));
}

ssize_t			ft_iosreadstr(t_ios *ios, char *dst, size_t n)
{
	ssize_t		size;

	if ((size = _ft_ios_read_to_end(ios, dst, n, &str_end)) == -1)
		return (-1);
	dst[size] = '\0';
	return (size);
}
