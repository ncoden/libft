/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy_tostr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:59:22 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 16:15:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstcpy_tostr(t_list *lst, char *dst, size_t n)
{
	size_t		i;
	size_t		i_content;
	char		*view;

	i = 0;
	while (lst != NULL)
	{
		view = (char *)(lst->content);
		i_content = 0;
		while (view[i] != '\0')
		{
			dst[i] = view[i_content];
			i_content++;
			i++;
			if (i == n)
				return (dst);
		}
		lst = lst->next;
	}
	dst[i] = '\0';
	return (dst);
}
