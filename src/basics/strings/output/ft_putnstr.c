/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:24:28 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/12 21:14:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/basics/strings.h"
#include "libft/basics/maths.h"

void			ft_putnstr(const char *s, size_t n)
{
	size_t		len;

	len = ft_strlen(s);
	write(1, s, MIN(len, n));
}
