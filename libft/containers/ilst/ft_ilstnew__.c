/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstnew__.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:01:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/ilst.h"

t_ilst			*ft_ilstnew__(size_t size, int index)
{
	t_ilst		*ilst;

	if (!(ilst = (t_ilst *)ft_memalloc(size)))
		return (NULL);
	ilst->index = index;
	return (ilst);
}
