/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:21 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/05 07:49:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*found;

	i = 0;
	found = 0;
	while (i == 0 || (i > 0 && str[i - 1] != '\0'))
	{
		if (str[i] == (char)c)
			found = (char*)(&str[i]);
		i++;
	}
	return (found);
}
