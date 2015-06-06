/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_sgnl.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/05 21:36:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SGNL_H
# define LIBFT_SGNL_H

# include "libft_evnt.h"

/*
**                 - - - About SGNL global variables - - -                    **
** SGNL is an interface to control more easily signals. It implement many     **
** features to make possible modular programming with signals.                **
** However, signals are global by definition. So the use of global variables  **
** here is fully justified.                                                   **
*/

int				g_sgnl_pushmode;

t_ilst_evnt		*g_sgnl_evnts;
t_tdata			*g_sgnl_esrc;

t_stck			*g_sgnl_stckevnts;
t_stck			*g_sgnl_stckesrc;

t_ilst_evnt		*ft_sgnlget(void);
t_bool			ft_sgnlset(t_ilst_evnt *events);
t_bool			ft_sgnlunset(void);
void			ft_sgnlcrush(t_ilst_evnt *events);
t_ilst_evnt		*ft_sgnlclr();
void			ft_sgnldel();
void			ft_sgnllisten(t_ilst_evnt *evnts);

void			ft_sgnlhook(char sig, void (*func)(void *), void *data);
t_bool			ft_sgnltrigger(char sig);
t_ilst_evnt		*ft_sgnlclrone(char sig);
void			ft_sgnldelone(char sig);

t_bool			ft_sgnlspush(t_ilst_evnt *events);
t_ilst_evnt		*ft_sgnlspull(void);

t_tdata			*ft_sgnlesrcget(void);
void			ft_sgnlesrcset(t_tdata *esrcs);

#endif
