/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpushback__.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 18:51:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 18:47:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpushback__(size_t size, t_ilst **alst, int index)
{
	t_ilst		*ilst;

	if (alst != NULL)
	{
		if (!(ilst = ft_ilstget(*alst, index)))
		{
			if (!(ilst = ft_ilstnew__(size, index)))
				return (NULL);
			ft_lstaddback((t_lst **)alst, (t_lst *)ilst);
		}
		return (ilst);
	}
	return (NULL);
}
