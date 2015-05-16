/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpushback__.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 18:48:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstpushfront__(size_t size, t_klst **alst, char *key)
{
	t_klst		*klst;

	if (alst != NULL)
	{
		if (!(klst = ft_klstget(*alst, key)))
		{
			if (!(klst = ft_klstnew__(size, key)))
				return (NULL);
			ft_lstaddback((t_lst **)alst, (t_lst *)klst);
		}
		return (klst);
	}
	return (NULL);
}
