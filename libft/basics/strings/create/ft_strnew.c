/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:34:30 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:26:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"

char	*ft_strnew(size_t size)
{
	char	*buffer;

	buffer = (char *)ft_memalloc(sizeof(char) * (size + 1));
	return (buffer);
}
