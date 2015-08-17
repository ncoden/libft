/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmputcmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:39:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 19:29:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmputcmd(char *tc_cmd)
{
	char		*cmd;

	if (tc_cmd)
	{
		if ((cmd = tgetstr(tc_cmd, NULL)))
			tputs(cmd, 0, (int (*)(int))&ft_putchr_trm);
	}
}
