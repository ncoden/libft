/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmgetout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 18:58:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 19:16:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_trmgetout(void)
{
	static int	fd;

	if (!fd)
		fd = open("/dev/tty", O_WRONLY | O_APPEND | O_CREAT);
	return (fd);
}
