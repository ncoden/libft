/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 18:48:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstnew(char *key, void *data, size_t size)
{
	t_klst		*klst;

	if (key != NULL)
	{
		if (!(klst = (t_klst *)malloc(sizeof(t_klst))))
			return (NULL);
		klst->key = key;
		if (data != NULL)
			klst->size = size;
		else
			klst->size = 0;
		klst->data = data;
		klst->next = NULL;
		return (klst);
	}
	return (NULL);
}
