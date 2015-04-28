/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:48:23 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 16:34:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstfold(t_lst *lst, void *(*f)(const void *, const void*, size_t))
{
	void	*result;

	if (lst != NULL)
	{
		result = lst->content;
		lst = lst->next;
		while (lst != NULL)
		{
			result = (*f)(result, lst->content, lst->size);
			lst = lst->next;
		}
		return (result);
	}
	return (NULL);
}
