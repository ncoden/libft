/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 18:46:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstpushback(t_klst **alst, char *key, void *data,
					size_t size)
{
	t_klst		*new;

	if (alst != NULL)
	{
		if ((new = ft_klstget(*alst, key)))
		{
			new->data = data;
			new->size = size;
		}
		else
		{
			if (!(new = ft_klstnew(key, data, size)))
				return (NULL);
			ft_lstaddback((t_lst **)alst, (t_lst *)new);
		}
		return (new);
	}
	return (NULL);
}
