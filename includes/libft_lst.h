/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/11 20:58:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

# define EXTEND_LST(type)	struct {struct type *next;}

typedef struct	s_lst
{
	EXTEND_LST	(s_lst);
	void		*data;
	size_t		size;
}				t_lst;

void			ft_lstaddfront(t_lst **alst, t_lst *new);
void			ft_lstaddback(t_lst **alst, t_lst *new);
void			ft_lstaddafter(t_lst *lst, t_lst *new);
void			ft_lstaddby(t_lst **alst, t_lst *new,
						int (*f)(const void *, const void *, size_t, size_t));
void			ft_lstaddrby(t_lst **alst, t_lst *new,
						int (*f)(const void *, const void *, size_t, size_t));

t_lst			*ft_lstnew(void const *data, size_t size);
t_lst			*ft_lstpushfront(t_lst **alst, const void *data,
						size_t size);
t_lst			*ft_lstpushback(t_lst **alst, const void *data,
						size_t size);
t_lst			*ft_lstpushafter(t_lst *lst, const void *data,
						size_t size);
t_lst			*ft_lstpushby(t_lst **alst, void *data, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));
t_lst			*ft_lstpushrby(t_lst **alst, void *data, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));

t_lst			*ft_lstln(void *data, size_t size);
t_lst			*ft_lstlnfront(t_lst **alst, void *data, size_t size);
t_lst			*ft_lstlnback(t_lst **alst, void *data, size_t size);
t_lst			*ft_lstlnafter(t_lst *lst, void *data,
						size_t size);
t_lst			*ft_lstlnby(t_lst **alst, void *data, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));
t_lst			*ft_lstlnrby(t_lst **alst, void *data, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));

char			*ft_lstcpy_tostr(t_lst *lst, char *dst, size_t n);
char			*ft_lstccpy_tostr(t_lst *lst, char *dst, char c, size_t n);
void			ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
t_lst			*ft_lstdup(t_lst *lst);
void			*ft_lstfold(t_lst *lst,
						void *(*f)(const void *, const void *, size_t));
void			ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
char			*ft_strlstjoin(t_lst *lst);
int				ft_lstlen(t_lst *lst);
t_lst			*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
void			ft_lstshift(t_lst **alst);

void			**ft_lsttoarray(t_lst *lst);

#endif
