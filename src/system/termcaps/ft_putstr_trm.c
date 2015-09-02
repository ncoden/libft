/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_trm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 19:06:11 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:57:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/strings.h"
#include "libft/system/termcaps.h"

void			ft_putstr_trm(const char *s)
{
	if (s != NULL)
		write(ft_trmgetout(), s, ft_strlen(s));
}
