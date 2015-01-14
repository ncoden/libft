/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:52:23 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 18:09:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_readtolst(int fd)
{
	t_list	*lst;
	t_list	*lst_first;
	char	*buffer;

	lst = NULL;
	lst_first = NULL;
	while (ft_readline(fd, &buffer))
	{
		if (!(lst = ft_lstlnafter(lst, buffer, sizeof(buffer))))
			return (NULL);
		if (lst_first == NULL)
			lst_first = lst;
	}
	return (lst_first);
}
