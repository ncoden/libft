/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evnt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:09:10 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVNT_H
# define LIBFT_EVNT_H

# include "libft_ilst.h"
# include "libft_klst.h"
# include "libft_stck.h"
# include "libft_type.h"

t_stck			*g_evnt_esrcs;

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

typedef struct	s_ilst_esrc
{
	EXTEND_ILST	(s_ilst_esrc);
	t_tdata		esrc;
}				t_ilst_esrc;

t_evnt			*ft_evntnew(void (*func)(void *), void *data);
void			ft_evntset(t_evnt *event, void (*func)(void *), void *data);
void			ft_evntcall(t_evnt *event);

t_bool			ft_ievnttrigger(t_ilst_evnt *events, int index);
t_bool			ft_ievntstrigger(t_stck *events, int index);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_ilstnew_evnt(...)		ft_ilstnew_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstpushback_evnt(...)	\
**				ft_ilstpushback_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstpushfront_evnt(...)	\
**				ft_ilstpushfront_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstget_evnt(...)		ft_ilstget_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstdelone_evnt(...)		ft_ilstdelone_(t_ilst_evnt, __VA_ARGS__)
** # define ft_ilstrem_evnt(...)		ft_ilstrem_(t_ilst_evnt, __VA_ARGS__)
*/

t_bool			ft_kevnttrigger(t_klst_evnt *events, char *key);
t_bool			ft_kevntstrigger(t_stck *events, char *key);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_klstnew_evnt(...)		ft_klstnew_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstpushback_evnt(...)	\
**				ft_klstpushback_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstpushfront_evnt(...)	\
**				ft_klstpushfront_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstget_evnt(...)		ft_klstget_(t_klst_evnt, __VA_ARGS__)
** # define ft_klstdelone_evnt(...)		ft_klstdelone_(t_ilst_evnt, __VA_ARGS__)
** # define ft_klstrem_evnt(...)		ft_klstrem_(t_klst_evnt, __VA_ARGS__)
*/

void			*ft_esrcget(t_type type);
t_bool			ft_esrcset(t_type type, void *data);
void			ft_esrccall(t_evnt *event, t_type esrc_type, void *esrc_data);
t_bool			ft_esrcrem(void);

t_bool			ft_iesrctrigger(t_ilst_evnt *events, int index,
					t_type esrc_type, void *esrc_data);
t_bool			ft_iesrcstrigger(t_stck *events, int index,
					t_type esrc_type, void *esrc_data);

t_bool			ft_kesrctrigger(t_klst_evnt *events, char *key,
					t_type esrc_type, void *esrc_data);
t_bool			ft_kesrcstrigger(t_stck *events, char *key,
					t_type esrc_type, void *esrc_data);

#endif
