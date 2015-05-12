/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/12 17:11:43 by ncoden           ###   ########.fr       */
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
		if (tcgetattr(0, &trm->opts) != -1)
			return (trm);
	}
	free(trm);
	return (NULL);
}
