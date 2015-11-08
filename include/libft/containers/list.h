/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/06 15:42:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

# include <stddef.h>
# include "libft/core/object.h"
# include "libft/basics/booleans.h"

# define LST_BASE(type)			_BASE(type *next;)

typedef struct	s_lst
{
	LST_BASE	(struct s_lst);
	void		*data;
}				t_lst;

t_lst			*ft_lstnew(void *data);

void			ft_lstaddfront(t_lst **alst, t_lst *node);
void			ft_lstaddback(t_lst **alst, t_lst *node);
void			ft_lstaddafter(t_lst *lst, t_lst *node);
void			ft_lstadditer(t_lst **begin, t_lst **iterator, t_lst *node);
void			ft_lstaddby(t_lst **alst, t_lst *node,
						int (*cmp)(const void *data1, const void *data2));

t_lst			*ft_lstpushfront(t_lst **alst, void *data);
t_lst			*ft_lstpushback(t_lst **alst, void *data);
t_lst			*ft_lstpushafter(t_lst *lst, void *data);
t_lst			*ft_lstpushiter(t_lst **begin, t_lst **iterator, void *data);
t_lst			*ft_lstpushby(t_lst **alst, void *data,
						int (*cmp)(const void *data1, const void *data2));

void			ft_lstdel(t_lst **alst, void (*del)(void *data));
void			ft_lstshift(t_lst **alst, void (*del)(void *data));
t_lst			*ft_lstdup(t_lst *lst);
void			*ft_lstfold(t_lst *lst,
						void *(*f)(const void *data1, const void *data2));
void			ft_lstiter(t_lst *lst, void (*f)(t_lst *node));
int				ft_lstlen(t_lst *lst);
t_lst			*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *node));
t_lst			*ft_lstget(t_lst *lst, t_bool (*f)(t_lst *node, void *data),
					void *data);
t_lst			*ft_lstgetprev(t_lst *lst, t_bool (*f)(t_lst *node, void *data),
					void *data, t_lst **prev);
t_lst			*ft_lstgetn(t_lst *lst, int index);

void			**ft_lsttoarray(t_lst *lst);

/**
** @brief			Convert an array to a list
** @param arr		A pointer to an array
** @return			A new list containing the array datas (array is free)
*/
t_lst			*ft_arraytolst(void **arr);
t_lst			*ft_strsplit_tolst(const char *s, char c);

t_lst			*ft_lstnew__(size_t size);
t_lst			*ft_lstpushfront__(size_t size, t_lst **alst);
t_lst			*ft_lstpushback__(size_t size, t_lst **alst);

#endif
