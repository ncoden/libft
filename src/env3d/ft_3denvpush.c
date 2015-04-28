/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 18:20:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 21:22:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlst		*ft_3denvpush(t_3denv *e, void *content, t_type type)
{
	return (ft_tlstpushback(&e->obj, content, type));
}
