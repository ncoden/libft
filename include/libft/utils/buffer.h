/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:46:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BUFFER_H
# define LIBFT_BUFFER_H

# include <stddef.h>
# include "libft/basics/booleans.h"

# define BUFFER_BUFF_SIZE	(256)

typedef struct	s_buff
{
	void		*begin;
	void		*end;
}				t_buff;

t_buff			*ft_buffnew(void);
t_bool			ft_buffalloc(t_buff *buff);

size_t			ft_buffgetfree(t_buff *buff);
size_t			ft_buffgetused(t_buff *buff);

void			ft_buffclr(t_buff *buff);

#endif
