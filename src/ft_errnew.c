/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 17:39:09 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 18:26:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err		*ft_errnew(int err, char *mess)
{
	t_err	*new;

	if (!(new = (t_err *)malloc(sizeof(t_err))))
		return (NULL);
	new->err = err;
	if (!(new->mess = ft_strdup(mess)))
		return (NULL);
	return (new);
}
