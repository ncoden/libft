/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtotab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 18:03:56 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/28 17:52:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_readtotab(int fd)
{
	t_lst	*lst;
	char	**tab;

	lst = ft_readtolst(fd);
	tab = (char **)ft_lsttotab(lst);
	return (tab);
}
