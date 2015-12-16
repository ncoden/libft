/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/16 01:22:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVENTS_H
# define LIBFT_EVENTS_H

# include "libft/basics/booleans.h"

typedef struct	s_evnt
{
	void		(*func)(void *data);
	void		*data;
}				t_evnt;

typedef struct	s_cb
{
	void		(*func)(void *data, void *res);
	void		*data;
}				t_cb;

t_evnt			*ft_evntnew(void (*func)(void *), void *data);
void			ft_evntset(t_evnt *event, void (*func)(void *), void *data);
t_bool			ft_evntcall(t_evnt *event);

t_cb			*ft_cbnew(void (*func)(void *, void *), void *data);
void			ft_cbset(t_cb *callback, void (*func)(void *, void *),
					void *data);
t_bool			ft_cbcall(t_cb *callback, void *res);

void			ft_evntstop(void);

#endif
