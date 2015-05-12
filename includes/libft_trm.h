/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_trm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 09:57:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/12 00:42:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TRM_H
# define LIBFT_TRM_H

# include <term.h>
# include <termios.h>
# include <curses.h>
# include <sys/ioctl.h>
# include <signal.h>

typedef struct		s_trm
{
	struct termios	*opts;
	t_ilst_evnt		*on_key_press;
	t_evnt			*on_resize;
}					t_trm;

struct termios		*ft_trmget();
t_bool				ft_trmset(struct termios *trm);

#endif
