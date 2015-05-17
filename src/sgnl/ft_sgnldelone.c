/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnldelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 16:06:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 19:23:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnldelone(char sig)
{
	if (g_sgnl)
	{
		signal(sig, SIG_DFL);
		FT_ILSTDELONE_EVNT(&g_sgnl, sig, &free);
	}
}