/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlesrcset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 13:20:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:42:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/types.h"
#include "libft/system/signals.h"

void			ft_sgnlesrcset(t_tdata *esrc)
{
	g_sgnl_esrc = esrc;
}
