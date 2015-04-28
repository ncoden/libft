/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchrsize_utf8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 08:51:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 08:24:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			ft_wchrsize_utf8(wchar_t c)
{
	char		bin;

	bin = ft_wchrbin(c);
	if (bin <= UTF8_BITSNBR1)
		return (1);
	else if (bin <= UTF8_BITSNBR2)
		return (2);
	else if (bin <= UTF8_BITSNBR3)
		return (3);
	else if (bin <= UTF8_BITSNBR4)
		return (4);
	else
		return (-1);
}
