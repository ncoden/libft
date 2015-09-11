/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:09:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/10 11:41:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"

char			*ft_strtrim(char const *s)
{
	char		*end;

	end = ft_strchr(s, '\0') - 1;
	while (s != end && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	while (s != end && (*end == ' ' || *end == '\n' || *end == '\t'))
		end--;
	if (s == end)
		return (ft_strnew(0));
	else
		return (ft_strsub(s, 0, end - s + 1));
}
