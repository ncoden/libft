/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpushfront__.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:12:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 17:21:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpushfront__(size_t size, t_ilst **alst, int index)
{
	t_ilst		*ilst;

	if (alst != NULL)
	{
		if (!(ilst = ft_ilstnew__(size, index)))
			return (NULL);
		ft_lstaddfront((t_lst **)alst, (t_lst *)ilst);
		return (ilst);
	}
	return (NULL);
}
