/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 16:51:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

typedef struct	s_list
{
	void			*content;
	size_t			size;
	struct s_list	*next;
}				t_list;

void			ft_lstaddfront(t_list **alst, t_list *new);
void			ft_lstaddback(t_list **alst, t_list *new);
void			ft_lstaddafter(t_list *lst, t_list *new);
void			ft_lstaddby(t_list **alst, t_list *new,
						int (*f)(const void *, const void *, size_t, size_t));
void			ft_lstaddrby(t_list **alst, t_list *new,
						int (*f)(const void *, const void *, size_t, size_t));

t_list			*ft_lstnew(void const *content, size_t size);
t_list			*ft_lstpushfront(t_list **alst, const void *content,
						size_t size);
t_list			*ft_lstpushback(t_list **alst, const void *content,
						size_t size);
t_list			*ft_lstpushafter(t_list *lst, const void *content,
						size_t size);
t_list			*ft_lstpushby(t_list **alst, void *content, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstpushrby(t_list **alst, void *content, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));

t_list			*ft_lstln(void *content, size_t size);
t_list			*ft_lstlnfront(t_list **alst, void *content, size_t size);
t_list			*ft_lstlnback(t_list **alst, void *content, size_t size);
t_list			*ft_lstlnafter(t_list *lst, void *content,
						size_t size);
t_list			*ft_lstlnby(t_list **alst, void *content, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstlnrby(t_list **alst, void *content, size_t size,
						int (*f)(const void *, const void *, size_t, size_t));

char			*ft_lstcpy_tostr(t_list *lst, char *dst, size_t n);
char			*ft_lstccpy_tostr(t_list *lst, char *dst, char c, size_t n);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstdup(t_list *lst);
void			*ft_lstfold(t_list *lst,
						void *(*f)(const void *, const void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char			*ft_strlstjoin(t_list *lst);
int				ft_lstlen(t_list *lst);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstshift(t_list **alst);

void			**ft_lsttotab(t_list *lst);

#endif
