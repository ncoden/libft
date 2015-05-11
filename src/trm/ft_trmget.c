/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/11 21:16:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct termios		*ft_trmget(void)
{
	static struct termios	*trm;

	if (trm == NULL)
	{
		if (!(trm = (struct termios *)malloc(sizeof(struct termios))))
			return (NULL);
		if (!(tgetent(NULL, ft_envget("TERM"))))
			return (NULL);
		if (tcgetattr(0, trm) == -1)
			return (NULL);
	}
	return (trm);
}
