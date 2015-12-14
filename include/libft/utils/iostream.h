/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostream.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 00:27:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 17:28:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IOSTREAM_H
# define LIBFT_IOSTREAM_H

# include <unistd.h>
# include "libft/basics/booleans.h"
# include "libft/utils/buffer.h"

typedef struct	s_ios
{
	t_buff		_buff;
	size_t		_cursor;
	int			fd;
	t_bool		end;
}				t_ios;

t_ios			*ft_iosnew(int fd);

t_bool			ft_iosdatas(t_ios *ios);

ssize_t			ft_iosread(t_ios *ios, void *dst, size_t n);
ssize_t			ft_iosreadstr(t_ios *ios, char *dst, size_t n);
ssize_t			ft_iosreadline(t_ios *ios, char *dst, size_t n);

char			*ft_iosgetstr(t_ios *ios);
char			*ft_iosgetline(t_ios *ios);

#endif
