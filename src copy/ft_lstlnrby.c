/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnrby.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:02:40 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlnrby(t_list **alst, void *content, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_list		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstln(content, csize);
		if (new != NULL)
			ft_lstaddrby(alst, new, f);
		return (new);
	}
	return (NULL);
}
