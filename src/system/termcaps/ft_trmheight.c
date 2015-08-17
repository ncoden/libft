/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmheight.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 19:09:58 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/09 19:18:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_trmheight(void)
{
	struct winsize	w;

	if (ioctl(ft_trmgetout(), TIOCGWINSZ, &w) != -1)
		return (w.ws_row);
	return (-1);
}
