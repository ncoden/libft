/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtnew__.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 16:40:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 14:08:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mt			*ft_mtnew__(size_t size)
{
	t_mt		*new;

	if (!(new = (t_mt *)malloc(size)))
		return (NULL);
	new->next = NULL;
	new->child = NULL;
	return (new);
}
