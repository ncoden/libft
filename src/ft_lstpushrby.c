/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushrby.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:04:06 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/21 17:02:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpushrby(t_list **alst, void *content, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_list		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstnew(content, csize);
		if (new != NULL)
			ft_lstaddrby(alst, new, f);
		return (new);
	}
	return (NULL);
}
