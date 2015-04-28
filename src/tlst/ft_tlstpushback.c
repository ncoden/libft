/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tlstpushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 17:48:49 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 19:28:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlst	*ft_tlstpushback(t_tlst **alst, void *content, t_type type)
{
	t_tlst		*new;

	if (alst != NULL)
	{
		if (!(new = ft_tlstnew(content, type)))
			return (NULL);
		ft_tlstaddback(alst, new);
		return (new);
	}
	return (NULL);
}
