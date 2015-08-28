/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmputcmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:39:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:22:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <term.h>
#include "libft/system/termcaps.h"

void			ft_trmputcmd(char *tc_cmd)
{
	char		*cmd;

	if (tc_cmd)
	{
		if ((cmd = tgetstr(tc_cmd, NULL)))
			tputs(cmd, 0, (int (*)(int))&ft_putchr_trm);
	}
}
