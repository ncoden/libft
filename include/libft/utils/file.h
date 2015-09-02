/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:36:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:11:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

# include "libft/containers/list.h"

# define FILE_BUFF_SIZE		255

typedef struct	s_fd
{
	int				fd;
	int				start;
	t_lst			*lst;
	struct s_fd		*next;
}				t_fd;

int				ft_readline(int fd, char **line);
t_lst			*ft_readtolst(int fd);
char			**ft_readtotab(int fd);

#endif
