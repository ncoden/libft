/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evnt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/11 20:51:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EVNT_H
# define LIBFT_EVNT_H

# include "libft_ilst.h"

typedef struct	s_evnt
{
	void		(*func)();
	char		*data;
}				t_evnt;

typedef struct	s_ilst_evnt
{
	EXTEND_ILST	(s_ilst_evnt);
	t_evnt		event;
}				t_ilst_evnt;

#endif
