/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evnt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 16:12:37 by ncoden           ###   ########.fr       */
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

# define FT_ILSTNEW_EVNT(...)		FT_ILSTNEW_(t_ilst_evnt, __VA_ARGS__)
# define FT_ILSTPUSHBACK_EVNT(...)	FT_ILSTPUSHBACK_(t_ilst_evnt, __VA_ARGS__)
# define FT_ILSTPUSHFRONT_EVNT(...)	FT_ILSTPUSHFRONT_(t_ilst_evnt, __VA_ARGS__)
# define FT_ILSTGET_EVNT(...)		FT_ILSTGET_(t_ilst_evnt, __VA_ARGS__)

void			ft_kevnttrigger(t_klst_evnt *events, char *key);

# define FT_KLSTNEW_EVNT(...)		FT_KLSTNEW_(t_klst_evnt, __VA_ARGS__)
# define FT_KLSTPUSHBACK_EVNT(...)	FT_KLSTPUSHBACK_(t_klst_evnt, __VA_ARGS__)
# define FT_KLSTPUSHFRONT_EVNT(...)	FT_KLSTPUSHFRONT_(t_klst_evnt, __VA_ARGS__)
# define FT_KLSTGET_EVNT(...)		FT_KLSTGET_(t_klst_evnt, __VA_ARGS__)

#endif
