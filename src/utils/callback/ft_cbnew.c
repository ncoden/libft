/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/07 15:34:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/callback.h"

t_cb			*ft_cbnew(void (*func)(void *, void *), void *data)
{
	t_cb		*callback;

	if (!(callback = (t_cb *)malloc(sizeof(t_cb))))
		return (NULL);
	callback->func = func;
	callback->data = data;
	return (callback);
}
