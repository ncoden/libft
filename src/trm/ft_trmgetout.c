/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmgetout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 18:58:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 23:46:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_trmgetout(void)
{
	if (g_trm_stdout <= 0)
		g_trm_stdout = open("/dev/tty", O_WRONLY | O_APPEND | O_CREAT);
	return (g_trm_stdout);
}
