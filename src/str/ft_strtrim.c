/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:09:46 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 14:19:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		st;
	size_t		end;
	char		*new_str;

	st = 0;
	end = ft_strlen(s) - 1;
	while (st < end && (s[st] == ' ' || s[st] == '\n' || s[st] == '\t'))
		st++;
	while (end >= st && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	new_str = ft_strnew(end - st + 1);
	if (new_str != NULL)
		ft_strncpy(new_str, &(s[st]), (end - st + 1));
	return (new_str);
}
