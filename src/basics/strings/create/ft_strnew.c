/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:34:30 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/08 17:44:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"

char			*ft_strnew(size_t size)
{
	return((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
