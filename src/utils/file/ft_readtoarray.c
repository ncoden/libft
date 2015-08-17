/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtotab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 18:03:56 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/09 15:19:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_readtoarray(int fd)
{
	t_lst	*lst;
	char	**array;

	lst = ft_readtolst(fd);
	array = (char **)ft_lsttoarray(lst);
	return (array);
}
