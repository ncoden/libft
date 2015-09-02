/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/14 17:01:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:02:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <term.h>
#include "libft/basics/chars.h"
#include "libft/system/termcaps.h"

void			ft_trmclr(void)
{
	char		*cmd;

	if ((cmd = tgetstr("cl", NULL)))
		tputs(cmd, 0, (int (*)(int))&ft_putchr_trm);
	else
		ft_putnchr('\n', ft_trmheight());
}
