/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:10:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <term.h>
#include "libft/basics/memory.h"
#include "libft/system/environment.h"
#include "libft/system/termcaps.h"

t_trm			*ft_trmnew(void)
{
	t_trm		*trm;
	char		*name;

	if (!(trm = (t_trm *)ft_memalloc(sizeof(t_trm))))
		return (NULL);
	name = ft_envget("TERM");
	if ((tgetent(NULL, name)))
	{
		if (tcgetattr(ft_trmgetout(), &trm->opts) != -1)
		{
			trm->inherit_signal = TRUE;
			return (trm);
		}
	}
	free(trm);
	return (NULL);
}
