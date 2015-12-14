/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iosgetstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 18:46:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 15:53:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/memory.h"
#include "libft/containers/list.h"
#include "libft/utils/iostream.h"
#include "libft/utils/iostream/private.h"

static void 	*str_end(void *mem, size_t size)
{
	return (ft_memchr(mem, '\0', size));
}

char			*ft_iosgetstr(t_ios *ios)
{
	char		*str;
	size_t		size;
	size_t		copied;
	t_lst		*stock;

	stock = NULL;
	if ((size = _ft_ios_stock_to_end(ios, &stock, &str_end)) == 0)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	copied = _ft_ios_copy_stock(ios, stock, str, size);
	if (copied < size)
		_ft_ios_copy_buff(ios, &str[copied], size - copied);
	return (str);
}
