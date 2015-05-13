/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:50:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 16:29:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hash			*ft_hashnew(const void *key, const void *data, size_t ksize,
								size_t size)
{
	t_hash		*hash;

	if (key != NULL && ksize > 0)
	{
		if (!(hash = (t_hash *)malloc(sizeof(t_hash))))
			return (NULL);
		hash->key = key;
		hash->ksize = ksize;
		if (data != NULL)
			hash->size = size;
		else
			hash->size = 0;
		hash->data = data;
		hash->next = NULL;
		return (hash);
	}
	return (NULL);
}
