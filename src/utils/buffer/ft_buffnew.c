/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/16 19:07:12 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/buffer.h"

t_buff			*ft_buffnew(void)
{
	t_buff		*buff;
	void		*datas;

	if (!(buff = (t_buff *)malloc(sizeof(t_buff))))
		return (NULL);
	if (!(datas = malloc(BUFFER_BUFF_SIZE)))
	{
		free(buff);
		return (NULL);
	}
	buff->begin = datas;
	buff->end = datas;
	return (buff);
}
