/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:05:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"
#include "libft/containers/klst.h"

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
