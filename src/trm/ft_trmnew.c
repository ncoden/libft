/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/06 16:14:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_trm			*ft_trmnew(void)
{
	t_trm		*trm;
	char		*name;

	if (!(name = ft_envget("TERM")))
		return (NULL);
	if (!(trm = (t_trm *)ft_memalloc(sizeof(t_trm))))
		return (NULL);
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
