/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 21:52:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:42:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/types.h"
#include "libft/system/signals.h"

t_ilst_evnt		*ft_sgnlget(void)
{
	return (g_sgnl_evnts);
}
