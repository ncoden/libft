/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpushfront__.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 17:26:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstpushfront__(size_t size, t_klst **alst, char *key)
{
	t_klst		*klst;

	if (alst != NULL)
	{
		if (!(klst = ft_klstnew__(size, key)))
			return (NULL);
		ft_lstaddfront((t_lst **)alst, (t_lst *)klst);
		return (klst);
	}
	return (NULL);
}
