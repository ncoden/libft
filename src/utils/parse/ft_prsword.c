/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 14:53:26 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 16:06:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"

char			*ft_prsword(const char **cursor, char c)
{
	char		*word;
	const char	*lcursor;

	lcursor = *cursor;
	while (*lcursor == c)
		lcursor++;
	if (*lcursor != '\0')
		word = (char *)lcursor;
	else
		word = NULL;
	while (*lcursor != c && *lcursor != '\0')
		lcursor++;
	*cursor = lcursor;
	return (word);
}
