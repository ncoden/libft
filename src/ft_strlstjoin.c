/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:34:53 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 17:03:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlstjoin(t_list *lst)
{
	size_t		size;
	t_list		*lst_first;
	char		*str;

	size = 0;
	lst_first = lst;
	while (lst != NULL)
	{
		size += lst->content_size - 1;
		lst = lst->next;
	}
	lst = lst_first;
	if (!(str = ft_strnew(size)))
		return (NULL);
	size = 0;
	while (lst != NULL)
	{
		ft_strcpy(&(str[size]), lst->content);
		size += lst->content_size - 1;
		lst = lst->next;
	}
	return (str);
}
