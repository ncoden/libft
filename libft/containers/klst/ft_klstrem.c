/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 15:50:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/klst.h"

t_klst			*ft_klstrem(t_klst **alst, char *key)
{
	t_klst		*lst;
	t_klst		*prev;

	if (!(lst = ft_klstprev(*alst, key, &prev)))
		return (NULL);
	if (prev)
		prev->next = lst->next;
	else
		*alst = (*alst)->next;
	return (lst);
}
