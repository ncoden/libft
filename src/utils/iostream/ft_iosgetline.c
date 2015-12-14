/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosgetline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:45 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 15:53:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"
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

char			*ft_iosgetline(t_ios *ios)
{
	char		*line;
	size_t		size;
	size_t		copied;
	t_lst		*stock;

	stock = NULL;
	if ((size = _ft_ios_stock_to_end(ios, &stock, &line_end)) == 0)
		return (NULL);
	if (!(line = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	line[size] = '\0';
	copied = _ft_ios_copy_stock(ios, stock, line, size);
	if (copied < size)
		_ft_ios_copy_buff(ios, &line[copied], size - copied);
	return (line);
}
