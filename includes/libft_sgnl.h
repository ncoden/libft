/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_sgnl.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 21:57:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SGNL_H
# define LIBFT_SGNL_H

# include "libft_evnt.h"

t_ilst_evnt		*g_sgnl;

t_ilst_evnt		*ft_sgnlget(void);
void			ft_sgnlset(t_ilst_evnt *events);
void			ft_sgnlcrush(t_ilst_evnt *events);
void			ft_sgnlclr();
void			ft_sgnldel();

void			ft_sgnlhook(char sig, void (*func)(void *), void *data);
void			ft_sgnltrigger(char sig);
void			ft_sgnlclrone(char sig);
void			ft_sgnldelone(char sig);

#endif
