/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmcloseout.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 19:18:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:59:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/system/termcaps.h"

void			ft_trmcloseout(void)
{
	if (g_trm_stdout > 0)
		close(g_trm_stdout);
	g_trm_stdout = -1;
}
