/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/06 15:41:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ILST_H
# define LIBFT_ILST_H

# include <stddef.h>
# include "libft/core/object.h"
# include "libft/basics/booleans.h"
# include "libft/containers/list.h"

# define ILST_BASE(type)		_BASE(LST_BASE(type); int index;)

typedef struct	s_ilst
{
	ILST_BASE	(struct s_ilst);
	void		*data;
	size_t		size;
}				t_ilst;

t_ilst			*ft_ilstnew(int index, void *data, size_t size);
void			ft_ilstset(t_ilst *lst, int index, void *data, size_t size);

t_ilst			*ft_ilstget(t_ilst *lst, int index);
t_ilst			*ft_ilstprev(t_ilst *lst, int index, t_ilst **prev);
t_ilst			*ft_ilstadd(t_ilst **alst, t_ilst *new);
t_ilst			*ft_ilstpush(t_ilst **alst, int index, void *data,
					size_t size);
t_bool			ft_ilstdelone(t_ilst **alst, int index,
					void (*func)(t_ilst *lst));
t_ilst			*ft_ilstrem(t_ilst **alst, int index);

t_ilst			*ft_ilstinsert(t_ilst **dst, t_ilst *src);
t_ilst			*ft_ilstmerge(t_ilst **dst, t_ilst *src);
void			ft_ilstcrush(t_ilst **dst, t_ilst *src, void (*func)(t_ilst *));
t_bool			ft_ilstfill(t_ilst **dst, t_ilst *src);

t_ilst			*ft_ilstnew__(size_t size, int index);
t_ilst			*ft_ilstpush__(size_t size, t_ilst **alst, int index);
t_ilst			*ft_ilstinsert__(size_t size, t_ilst **dst, t_ilst *src);
t_bool			ft_ilstfill__(size_t size, t_ilst **dst, t_ilst *src);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_ilstnew_(t, i)			(t *)ft_ilstnew__(sizeof(t), i)
** # define ft_ilstpushback_(t, a, i)	\
**				(t *)ft_ilstpushback__(sizeof(t), (t_ilst **)a, i)
** # define ft_ilstpushfront_(t, a, i)	\
**				(t *)ft_ilstpushfront__(sizeof(t), (t_ilst **)a, i)
** # define ft_ilstget_(t, l, i)		(t *)ft_ilstget((t_ilst *)l, i)
** # define ft_ilstdelone_(t, l, i, f)	\
**				ft_ilstdelone((t_ilst **)l, i, (void (*)(t_ilst *))f)
** # define ft_ilstrem_(t, l, i)		(t *)ft_ilstrem((t_ilst **)l, i)
*/

#endif
