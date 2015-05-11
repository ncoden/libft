/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tlstpushfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 17:47:09 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 19:30:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlst		*ft_tlstpushfront(t_tlst **alst, void *data, t_type type)
{
	t_tlst	*new;

	if (alst != NULL)
	{
		if (!(new = ft_tlstnew(data, type)))
			return (NULL);
		ft_tlstaddfront(alst, new);
		return (new);
	}
	return (NULL);
}
