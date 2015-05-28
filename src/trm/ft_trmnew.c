/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/28 19:11:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_trm			*ft_trmnew(void)
{
	t_trm		*trm;
	char		*name;

	if (!(name = ft_envget("TERM")))
		return (NULL);
	if (!(trm = (t_trm *)malloc(sizeof(t_trm))))
		return (NULL);
	if ((tgetent(NULL, name)))
	{
		if (tcgetattr(ft_trmgetout(), &trm->opts) != -1)
		{
			trm->on_key_press = NULL;
			trm->on_signal = NULL;
			return (trm);
		}
	}
	free(trm);
	return (NULL);
}
