/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtpushnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 18:11:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/26 18:30:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mt			*ft_mtpushnext(t_mt **amt, void *data, size_t size)
{
	t_mt		*new;

	if (!(new = ft_mtnew(data, size)))
		return (NULL);
	if (*amt)
		ft_mtaddnext(*amt, new);
	else
		*amt = new;
	return (new);
}
