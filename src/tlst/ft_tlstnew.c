/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 16:44:12 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 14:57:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlist		*ft_tlstnew(void *content, t_type type)
{
	t_tlist		*new;

	if (!(new = (t_tlist *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->type = type;
	new->next = NULL;
	return (new);
}
