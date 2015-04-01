/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 17:39:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/03/16 11:06:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			*ft_errnew(int err, char *mess)
{
	t_err		*new;

	if (mess)
	{
		if ((new = (t_err *)malloc(sizeof(t_err))))
		{
			if ((new->mess = ft_strdup(mess)))
			{
				new->err = err;
				return (new);
			}
			ft_errdel(new);
		}
	}
	return (NULL);
}
