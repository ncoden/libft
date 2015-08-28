/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:06:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/klst.h"

t_klst			*ft_klstnew(char *key, void *data, size_t size)
{
	t_klst		*klst;

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
