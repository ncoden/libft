/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 18:20:29 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/14 19:16:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlst		*ft_3denvpush(t_3denv *e, void *data, t_type type)
{
	return (ft_tlstpushback(&e->obj, data, type));
}
