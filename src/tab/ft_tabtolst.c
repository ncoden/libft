/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 16:30:16 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 18:06:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_tabtolst(void **tab)
{
	int		i;
	t_list	*lst;

	i = 0;
	lst = NULL;
	while (tab[i] != NULL)
	{
		if (!ft_lstlnback(&lst, tab[i], sizeof(tab[i])))
			return (NULL);
		i++;
	}
	if (tab != NULL)
		free(tab);
	return (lst);
}
