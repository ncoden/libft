/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/06 15:42:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TREE_H
# define LIBFT_TREE_H

# include <stddef.h>
# include "libft/core/object.h"

# define MT_BASE(type)			_BASE(type *next; type *child;)

typedef struct	s_mt
{
	MT_BASE		(struct s_mt);
	void		*data;
	size_t		size;
}				t_mt;

t_mt			*ft_mtnew(void *data, size_t size);

void			ft_mtaddnext(t_mt *mt, t_mt *child);
void			ft_mtaddchild(t_mt *mt, t_mt *child);

t_mt			*ft_mtpushnext(t_mt **amt, void *data, size_t size);
t_mt			*ft_mtpushchild(t_mt **amt, void *data, size_t size);

t_mt			*ft_mtnew__(size_t size);

#endif
