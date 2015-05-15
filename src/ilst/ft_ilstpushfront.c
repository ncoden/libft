/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpushfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 16:45:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpushfront(t_ilst **alst, int index, void *data,
					size_t size)
{
	t_ilst		*new;

	if (alst != NULL)
	{
		if (!(new = ft_ilstnew(index, data, size)))
			return (NULL);
		ft_lstaddfront((t_lst **)alst, (t_lst *)new);
		return (new);
	}
	return (NULL);
}
