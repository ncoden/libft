/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstccpy_tostr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:57:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:10:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/strings.h"
#include "libft/containers/list.h"

char	*ft_lstccpy_tostr(t_lst *lst, char *dst, char c, size_t n)
{
	size_t		i;
	char		*found;

	i = 0;
	while (lst != NULL)
	{
		found = ft_strccpy(&(dst[i]), (char *)lst->data, c, n - i);
		if (found != NULL)
			return (found);
		i += lst->size;
		lst = lst->next;
	}
	return (0);
}
