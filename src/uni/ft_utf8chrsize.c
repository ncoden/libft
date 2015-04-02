/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8chrsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 08:51:35 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/02 19:30:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			ft_utf8chrsize(t_utf8chr c)
{
	if (c < 0xFF)
		return (1);
	else if (c < 0xFFFF)
		return (2);
	else if (c < 0xFFFFFF)
		return (3);
	else if (c < 0xFFFFFFFF)
		return (4);
	else
		return (-1);
}
