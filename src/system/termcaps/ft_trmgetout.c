/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmgetout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 18:58:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:21:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "libft/system/termcaps.h"

int				ft_trmgetout(void)
{
	if (g_trm_stdout <= 0)
		g_trm_stdout = open(ttyname(0), O_WRONLY | O_APPEND | O_CREAT);
	return (g_trm_stdout);
}
