/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmkeycmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:20:57 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 21:43:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmkeycmd(t_trm *trm, char *key, char *tc_cmd)
{
	if (trm && tc_cmd)
		ft_trmkeyhook(trm, key, (void (*)(void *))&ft_trmputcmd, tc_cmd);
}
