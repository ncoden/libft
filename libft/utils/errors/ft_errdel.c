/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:49:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:01:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/errors.h"

void			ft_errdel(t_err *err)
{
	if (err)
	{
		if (err->mess)
			free(err->mess);
		free(err);
	}
}
