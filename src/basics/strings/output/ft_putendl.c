/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:42:14 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 16:14:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/chars.h"
#include "libft/basics/strings.h"

void			ft_putendl(const char *s)
{
	ft_putstr(s);
	ft_putchr('\n');
}
