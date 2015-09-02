/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmgetcmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/14 17:06:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:03:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <term.h>

char			*ft_trmgetcmd(char *tc_cmd)
{
	if (tc_cmd)
		return (tgetstr(tc_cmd, NULL));
	return (NULL);
}
