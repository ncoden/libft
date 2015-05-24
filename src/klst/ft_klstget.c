/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 20:43:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstget(t_klst *lst, char *key)
{
	if (!lst)
		return (NULL);
	while (lst && (ft_strcmp(lst->key, key) < 0))
		lst = lst->next;
	if (lst && ft_strequ(lst->key, key))
		return (lst);
	return (NULL);
}
