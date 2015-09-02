/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:29:07 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:38:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/unicode.h"

size_t			ft_wstrnsize(const wchar_t *s, size_t n)
{
	char		unicode;

	if (s)
	{
		unicode = ft_getunicode();
		if (unicode == UNI_UTF8)
			return (ft_wstrnsize_utf8(s, n));
	}
	return (-1);
}
