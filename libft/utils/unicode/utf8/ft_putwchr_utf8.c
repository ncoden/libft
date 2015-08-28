/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchr_utf8.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:41:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:39:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/utils/unicode.h"

void			ft_putwchr_utf8(wchar_t c)
{
	c = ft_utf8chrencode(c);
	write(1, &c, ft_utf8chrsize(c));
}
