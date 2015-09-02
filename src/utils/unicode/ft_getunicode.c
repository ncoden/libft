/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getunicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 17:37:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:23:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <locale.h>
#include "libft/basics/strings.h"
#include "libft/utils/unicode.h"

static char		*parse_locale(char *locale)
{
	char		*start;

	start = locale;
	while (*locale != '.' && *locale != '\0')
		locale++;
	if (locale != '\0')
		return (++locale);
	return (start);
}

char			ft_getunicode(void)
{
	static char		unicode;
	static char		*ptr;
	char			*locale;

	if ((locale = setlocale(LC_ALL, NULL)))
	{
		if (unicode != 0 && ptr == locale)
			return (unicode);
		ptr = locale;
		locale = parse_locale(locale);
		if (ft_strequ(locale, "UTF-8"))
			unicode = UNI_UTF8;
		if (ft_strequ(locale, "UTF-16"))
			unicode = UNI_UTF16;
		if (ft_strequ(locale, "UTF-32"))
			unicode = UNI_UTF32;
		if (unicode != 0)
			return (unicode);
	}
	return (UNI_UNKNOW);
}
