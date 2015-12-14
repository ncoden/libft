/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/14 18:18:44 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/19 18:41:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/basics/booleans.h"
#include "libft/utils/buffer.h"

t_bool			ft_buffalloc(t_buff *buff)
{
	void		*datas;

	if (!(datas = malloc(BUFFER_BUFF_SIZE)))
		return (FALSE);
	buff->begin = datas;
	buff->end = datas;
	return (TRUE);
}
