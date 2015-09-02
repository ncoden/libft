/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstnew__.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 15:49:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/memory.h"
#include "libft/containers/klst.h"

t_klst			*ft_klstnew__(size_t size, char *key)
{
	t_klst		*klst;

	if (!(klst = (t_klst *)ft_memalloc(size)))
		return (NULL);
	klst->key = key;
	return (klst);
}
