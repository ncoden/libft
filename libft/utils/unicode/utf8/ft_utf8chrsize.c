/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8chrsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 08:51:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:34:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			ft_utf8chrsize(wchar_t c)
{
	if ((unsigned int)c < 0xFF)
		return (1);
	else if ((unsigned int)c < 0xFFFF)
		return (2);
	else if ((unsigned int)c < 0xFFFFFF)
		return (3);
	else if ((unsigned int)c < 0xFFFFFFFF)
		return (4);
	else
		return (-1);
}
