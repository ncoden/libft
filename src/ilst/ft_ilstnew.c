/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 16:47:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstnew(int index, void *data, size_t size)
{
	t_ilst		*ilst;

	if (!(ilst = (t_ilst *)malloc(sizeof(t_ilst))))
		return (NULL);
	ilst->index = index;
	if (data != NULL)
		ilst->size = size;
	else
		ilst->size = 0;
	ilst->data = data;
	ilst->next = NULL;
	return (ilst);
}
