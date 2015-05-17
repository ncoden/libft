/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 19:11:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 19:17:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnlclr(void)
{
	while (g_sgnl != NULL)
	{
		signal(g_sgnl->index, SIG_DFL);
		g_sgnl = g_sgnl->next;
	}
	g_sgnl = NULL;
}
