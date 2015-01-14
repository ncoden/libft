/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:34:52 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/09 15:28:36 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_fd		*get_fdatas(t_fd **flst, int const fd)
{
	t_fd	*fview;
	t_fd	*fview_prev;

	if ((int)fd < 0)
		return (NULL);
	fview = *flst;
	fview_prev = NULL;
	while (fview != NULL)
	{
		if (fview->fd == fd)
			return (fview);
		fview_prev = fview;
		fview = fview->next;
	}
	if (!(fview = (t_fd *)malloc(sizeof(t_fd))))
		return (NULL);
	fview->fd = fd;
	fview->start = 0;
	fview->lst = NULL;
	fview->next = NULL;
	if (fview_prev != NULL)
		fview_prev->next = fview;
	else
		*flst = fview;
	return (fview);
}

static int		read_to_lst(t_fd *fdatas)
{
	t_list	*new_lst;
	char	*buffer;

	buffer = (char *)malloc(BUFF_SIZE + 1);
	if (buffer == NULL)
		return (-1);
	new_lst = ft_lstln(buffer, BUFF_SIZE);
	if (new_lst == NULL)
		return (-1);
	ft_lstaddback(&(fdatas->lst), new_lst);
	return (read(fdatas->fd, (char *)(new_lst->content), BUFF_SIZE));
}

static int		get_line_end(t_fd *fdatas, int *can_read)
{
	int		i_buffer;
	t_list	*lst;
	char	*found;

	i_buffer = 0;
	*can_read = BUFF_SIZE;
	if (fdatas->lst == NULL)
		*can_read = read_to_lst(fdatas);
	lst = fdatas->lst;
	while (*can_read)
	{
		if (i_buffer == 0)
			found = ft_strchr((char *)(lst->content + fdatas->start), '\n');
		else
			found = ft_strchr((char *)(lst->content), '\n');
		if (found != NULL)
			return (i_buffer * BUFF_SIZE + (found - (char *)lst->content));
		*can_read = read_to_lst(fdatas);
		i_buffer++;
		lst = lst->next;
	}
	return (i_buffer * BUFF_SIZE);
}

static char		*make_str(t_fd *fdatas, int const line_end)
{
	int		i;
	int		max;
	char	*str;

	i = 0;
	max = (line_end - fdatas->start);
	if (!(str = (char *)malloc(sizeof(char) * (max + 1))))
		return (NULL);
	while (i <= max)
	{
		ft_strncpy(&(str[i]), fdatas->lst->content + fdatas->start, (max - i));
		i += BUFF_SIZE - fdatas->start;
		if (i <= max)
			ft_lstshift(&(fdatas->lst));
		fdatas->start = 0;
	}
	str[max] = '\0';
	fdatas->start = line_end % BUFF_SIZE + 1;
	return (str);
}

int				ft_readline(int fd, char **line)
{
	int				line_end;
	int				can_read;
	t_fd			*fdatas;
	static t_fd		*flst;

	if (!(fdatas = get_fdatas(&flst, fd)))
		return (-1);
	if (fdatas->start == -1)
	{
		free(fdatas->lst);
		fdatas->lst = NULL;
		fdatas->start = 0;
		return (0);
	}
	line_end = get_line_end(fdatas, &can_read);
	*line = make_str(fdatas, line_end);
	if (line_end < BUFF_SIZE && can_read == 0)
		fdatas->start = -1;
	if (line_end == BUFF_SIZE && can_read == 0)
		return (0);
	if (can_read == -1 || line == NULL)
		return (-1);
	return (1);
}
