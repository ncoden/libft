/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushrby.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:02:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:13:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst		*ft_lstpushrby(t_lst **alst, void *data, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_lst		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstnew(data, csize);
		if (new != NULL)
			ft_lstaddrby(alst, new, f);
		return (new);
	}
	return (NULL);
}
