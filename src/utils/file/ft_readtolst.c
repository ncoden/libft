/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:52:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:10:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"
#include "libft/utils/file.h"

t_lst		*ft_readtolst(int fd)
{
	t_lst	*lst;
	t_lst	*lst_first;
	char	*buffer;

	lst = NULL;
	lst_first = NULL;
	while (ft_readline(fd, &buffer))
	{
		if (!(lst = ft_lstpushafter(lst, buffer, sizeof(buffer))))
			return (NULL);
		if (lst_first == NULL)
			lst_first = lst;
	}
	return (lst_first);
}
