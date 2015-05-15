/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_klst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/15 16:50:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_KLST_H
# define LIBFT_KLST_H

# define EXTEND_KLST(type)	struct {EXTEND_LST(type); char *key;}

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

# define		ft_klstget__(type, l, k) (type *)ft_klstget((t_klst *)l, k)

#endif
