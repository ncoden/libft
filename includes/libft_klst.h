/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_klst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 17:36:44 by ncoden           ###   ########.fr       */
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
t_bool			ft_klstdel(t_klst **alst, char *key, void (*func)(t_klst *));

t_klst			*ft_klstnew__(size_t size, char *key);
t_klst			*ft_klstpushback__(size_t size, t_klst **alst, char *key);
t_klst			*ft_klstpushfront__(size_t size, t_klst **alst, char *key);

# define FT_KLSTNEW_(t, i)			ft_klstnew__(sizeof(t), k)
# define FT_KLSTPUSHBACK_(t, a, k)	ft_klstpushback__(sizeof(t), a, k)
# define FT_KLSTPUSHFRONT_(t, a, k)	ft_klstpushfront__(sizeof(t), a, k)
# define FT_KLSTGET_(t, l, k)		(t *)ft_klstget((t_klst *)l, k)
# define FT_KLSTDEL_(t, l, k, f)	ft_klstdel((t_klst *)l, k, void (*f)(t))

#endif
