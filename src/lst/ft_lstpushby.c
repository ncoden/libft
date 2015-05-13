/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 20:00:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 16:20:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst		*ft_lstpushby(t_lst **alst, void *data, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_lst		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstnew(data, csize);
		if (new != NULL)
			ft_lstaddby(alst, new, f);
		return (new);
	}
	return (NULL);
}
