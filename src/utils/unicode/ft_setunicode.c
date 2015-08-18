/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setunicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 18:09:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/19 01:01:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_setunicode(char format)
{
	char		*res;

	if (format == UNI_UTF8)
		res = setlocale(LC_ALL, "en_US.UTF-8");
	else if (format == UNI_UTF16)
		res = setlocale(LC_ALL, "en_US.UTF-16");
	else if (format == UNI_UTF32)
		res = setlocale(LC_ALL, "en_US.UTF-32");
	else
		return (FALSE);
	return (res ? TRUE : FALSE);
}
