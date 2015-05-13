/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpushfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 19:14:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstpushfront(t_klst **alst, char *key, void *data,
					size_t size)
{
	t_klst		*new;

	if (alst != NULL)
	{
		if (!(new = ft_klstnew(key, data, size)))
			return (NULL);
		ft_lstaddfront((t_lst **)alst, (t_lst *)new);
		return (new);
	}
	return (NULL);
}
