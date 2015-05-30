/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmgetin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 23:27:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 23:46:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_trmgetin(void)
{
	if (g_trm_stdin <= 0)
		g_trm_stdin = open("/dev/stdin", O_RDONLY | O_CREAT);
	return (g_trm_stdin);
}
