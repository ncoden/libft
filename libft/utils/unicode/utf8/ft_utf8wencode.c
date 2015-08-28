/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8wencode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:19:24 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:35:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/unicode.h"

void			ft_utf8wencode(wchar_t *wstr)
{
	while (*wstr != '\0')
	{
		*wstr = ft_utf8chrencode(*wstr);
		wstr++;
	}
}
