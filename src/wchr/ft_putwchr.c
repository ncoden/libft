/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:41:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/02 14:25:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwchr(wchar_t c)
{
	t_utf8chr	utf8;

	utf8 = ft_utf8chrencode(c);
	write(1, &utf8, ft_utf8chrsize(utf8));
}
