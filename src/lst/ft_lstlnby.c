/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 20:00:00 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:37:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst		*ft_lstlnby(t_lst **alst, void *content, size_t csize,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_lst		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstln(content, csize);
		if (new != NULL)
			ft_lstaddby(alst, new, f);
		return (new);
	}
	return (NULL);
}
