/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_klst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 15:50:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_KLST_H
# define LIBFT_KLST_H

# define EXTEND_KLST(type)	struct {EXTEND_LST(type); char *key;}
# define KLST_DATA(klst)	(LST_DATA(klst) + sizeof(char *))

typedef struct	s_klst
{
	EXTEND_KLST	(s_klst);
	void		*data;
	size_t		size;
}				t_klst;

t_klst			*ft_klstnew(char *key, void *data, size_t size);
t_klst			*ft_klstpushback(t_klst **alst, char *key, void *data,
					size_t size);
t_klst			*ft_klstpushfront(t_klst **alst, char *key, void *data,
					size_t size);
t_klst			*ft_klstget(t_klst *lst, char *key);
t_bool			ft_klstdelone(t_klst **alst, char *key,
					void (*func)(t_klst *));
t_klst			*ft_klstrem(t_ilst **alst, char *key);

t_klst			*ft_klstnew__(size_t size, char *key);
t_klst			*ft_klstpushback__(size_t size, t_klst **alst, char *key);
t_klst			*ft_klstpushfront__(size_t size, t_klst **alst, char *key);

/*
** The following macros are very useful, but the norm don't accept them
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
** # define ft_klstnew_(t, i)			(t *)ft_klstnew__(sizeof(t), k)
** # define ft_klstpushback_(t, a, k)	\
**				(t *)ft_klstpushback__(sizeof(t), (t_klst **)a, k)
** # define ft_klstpushfront_(t, a, k)	\
**				(t *)ft_klstpushfront__(sizeof(t), (t_klst **)a, k)
** # define ft_klstget_(t, l, k)		(t *)ft_klstget((t_klst *)l, k)
** # define ft_klstdelone_(t, l, k, f)	\
**				ft_klstdelone((t_klst **)l, k, (void (*)(t_ilst *))f)
** # define ft_klstrem_(t, l, k)		(t *)ft_klstrem((t_klst **)l, k)
*/

#endif
