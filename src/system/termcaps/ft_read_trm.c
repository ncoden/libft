/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_trm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:15:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:58:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/system/termcaps.h"

char			*ft_read_trm(void)
{
	int				len;
	static char		buffer[256];

	if ((len = read(ft_trmgetin(), buffer, 255)) >= 0)
	{
		buffer[len] = '\0';
		return (buffer);
	}
	buffer[0] = '\0';
	return (NULL);
}
