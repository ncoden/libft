/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlesrcget.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 13:20:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:42:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/types.h"
#include "libft/system/signals.h"

t_tdata			*ft_sgnlesrcget(void)
{
	return (g_sgnl_esrc);
}
