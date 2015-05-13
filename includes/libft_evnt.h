/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evnt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 16:32:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVNT_H
# define LIBFT_EVNT_H

# include "libft_klst.h"

typedef struct	s_evnt
{
	void		(*func)(void *);
	void		*data;
}				t_evnt;

typedef struct	s_klst_evnt
{
	EXTEND_KLST	(s_klst_evnt);
	t_evnt		event;
}				t_klst_evnt;

t_evnt			*ft_evntnew(void (*func)(void *), void *data);
void			ft_evntset(t_evnt *event, void (*func)(void *), void *data);

#endif
