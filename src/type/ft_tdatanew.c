/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tdatanew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:22:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 11:24:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tdata			*ft_tdatanew(t_type type, void *data)
{
	t_tdata		*new;

	if ((new = (t_tdata *)malloc(sizeof(t_tdata))))
	{
		new->type = type;
		new->data = data;
		return (new);
	}
	return (NULL);
}