/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmcloseout.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 19:18:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 23:47:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmcloseout(void)
{
	if (g_trm_stdout > 0)
		close(g_trm_stdout);
	g_trm_stdout = -1;
}
