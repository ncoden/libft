/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstccpy_tostr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:57:54 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 15:02:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstccpy_tostr(t_list *lst, char *dst, char c, size_t n)
{
	size_t		i;
	char		*found;

	i = 0;
	while (lst != NULL)
	{
		found = ft_strccpy(&(dst[i]), (char *)lst->content, c, n - i);
		if (found != NULL)
			return (found);
		i += lst->content_size;
		lst = lst->next;
	}
	return (0);
}
