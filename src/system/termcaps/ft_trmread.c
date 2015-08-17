/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmread.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:15:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 19:15:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_trmread(void)
{
	int				len;
	static char		buffer[256];

	if ((len = read(0, buffer, 255)))
	{
		buffer[len] = '\0';
		return (buffer);
	}
	return (NULL);
}
