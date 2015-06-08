/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront__.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/08 19:24:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst			*ft_lstpushfront__(size_t size, t_lst **alst)
{
	t_lst		*new;

	if (!(new = ft_lstnew__(size)))
		return (NULL);
	ft_lstaddfront(alst, new);
	return (new);
}
