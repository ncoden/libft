/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 18:44:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpushback(t_ilst **alst, int index, void *data,
					size_t size)
{
	t_ilst		*new;

	if (alst != NULL)
	{
		if ((new = ft_ilstget(*alst, index)))
		{
			new->data = data;
			new->size = size;
		}
		else
		{
			if (!(new = ft_ilstnew(index, data, size)))
				return (NULL);
			ft_lstaddback((t_lst **)alst, (t_lst *)new);
		}
		return (new);
	}
	return (NULL);
}
