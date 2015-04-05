/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:30:51 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/19 15:11:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnchr(char c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}
