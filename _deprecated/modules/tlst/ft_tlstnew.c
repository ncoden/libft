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

t_tlst		*ft_tlstnew(void *data, t_type type)
{
	t_tlst		*new;

	if (!(new = (t_tlst *)malloc(sizeof(t_lst))))
		return (NULL);
	new->data = data;
	new->type = type;
	new->next = NULL;
	return (new);
}
