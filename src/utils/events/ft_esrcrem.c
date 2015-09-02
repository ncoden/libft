/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_esrcrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 11:27:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:47:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/booleans.h"
#include "libft/containers/stack.h"
#include "libft/utils/events.h"

t_bool			ft_esrcrem(void)
{
	if (g_evnt_esrcs)
	{
		free(ft_stckpull(&g_evnt_esrcs));
		return (TRUE);
	}
	return (FALSE);
}
