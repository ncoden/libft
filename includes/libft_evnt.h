/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evnt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 19:51:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVNT_H
# define LIBFT_EVNT_H

# include "libft_ilst.h"
# include "libft_klst.h"

typedef struct	s_evnt
{
	void		(*func)(void *);
	void		*data;
}				t_evnt;

typedef struct	s_ilst_evnt
{
	EXTEND_ILST	(s_ilst_evnt);
	t_evnt		event;
}				t_ilst_evnt;

typedef struct	s_klst_evnt
{
	EXTEND_KLST	(s_klst_evnt);
	t_evnt		event;
}				t_klst_evnt;

t_evnt			*ft_evntnew(void (*func)(void *), void *data);
void			ft_evntset(t_evnt *event, void (*func)(void *), void *data);
void			ft_evntcall(t_evnt *event);

void			ft_ievnttrigger(t_ilst_evnt *events, int index);

# define ft_ilstnew_evnt(...)		ft_ilstnew_(t_ilst_evnt, __VA_ARGS__)
# define ft_ilstpushback_evnt(...)	ft_ilstpushback_(t_ilst_evnt, __VA_ARGS__)
# define ft_ilstpushfront_evnt(...)	ft_ilstpushfront_(t_ilst_evnt, __VA_ARGS__)
# define ft_ilstget_evnt(...)		ft_ilstget_(t_ilst_evnt, __VA_ARGS__)

void			ft_kevnttrigger(t_klst_evnt *events, char *key);

# define ft_klstnew_evnt(...)		ft_klstnew_(t_klst_evnt, __VA_ARGS__)
# define ft_klstpushback_evnt(...)	ft_klstpushback_(t_klst_evnt, __VA_ARGS__)
# define ft_klstpushfront_evnt(...)	ft_klstpushfront_(t_klst_evnt, __VA_ARGS__)
# define ft_klstget_evnt(...)		ft_klstget_(t_klst_evnt, __VA_ARGS__)

#endif
