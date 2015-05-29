/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_sgnl.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 14:26:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SGNL_H
# define LIBFT_SGNL_H

# include "libft_evnt.h"

t_ilst_evnt		*g_sgnl_evnts;
t_ilst_esrc		*g_sgnl_esrcs;

t_stck			*g_sgnl_stckevnts;
t_stck			*g_sgnl_stckesrcs;

t_ilst_evnt		*ft_sgnlget(void);
void			ft_sgnlset(t_ilst_evnt *events);
void			ft_sgnlmerge(t_ilst_evnt *events);
void			ft_sgnlcrush(t_ilst_evnt *events);
t_ilst_evnt		*ft_sgnlclr();
void			ft_sgnldel();

void			ft_sgnlhook(char sig, void (*func)(void *), void *data);
void			ft_sgnltrigger(char sig);
t_ilst_evnt		*ft_sgnlclrone(char sig);
void			ft_sgnldelone(char sig);

t_bool			ft_sgnlspush(t_ilst_evnt *events);
t_ilst_evnt		*ft_sgnlspull(void);

t_ilst_esrc		*ft_sgnlesrcget(void);
void			ft_sgnlesrcset(t_ilst_esrc *esrcs);

#endif
