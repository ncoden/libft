/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setunicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 18:09:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/28 10:58:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_setunicode(char format)
{
	if (format == UNI_UTF8)
		return ((t_bool)setlocale(LC_ALL, "en_US.UTF-8"));
	else if (format == UNI_UTF16)
		return ((t_bool)setlocale(LC_ALL, "en_US.UTF-16"));
	else if (format == UNI_UTF32)
		return ((t_bool)setlocale(LC_ALL, "en_US.UTF-32"));
	return (0);
}
