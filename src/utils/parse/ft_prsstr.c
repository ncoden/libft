/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 17:51:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/06 05:10:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_prsstr(char **cursor, const char *str)
{
	int		i;
	char	*lcursor;

	if (str && cursor && (lcursor = *cursor))
	{
		i = 0;
		while (lcursor[i] == str[i] && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			*cursor = &lcursor[i];
			return (i);
		}
	}
	return (0);
}
