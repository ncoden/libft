/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_pair.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 09:08:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/03/16 10:49:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PAIR_H
# define LIBFT_PAIR_H

typedef struct	s_cpair
{
	char		index;
	void		*data;
}				t_cpair;

typedef struct	s_fpair
{
	char		index;
	void		(*func)();
}				t_fpair;

typedef struct	s_npair
{
	int			index;
	void		*data;
}				t_npair;

typedef struct	s_pair
{
	char		*index;
	void		*data;
}				t_pair;

t_cpair			*ft_cpairnew(char index, void *data);
t_fpair			*ft_fpairnew(char index, void (*func)());
t_npair			*ft_npairnew(int index, void *data);
t_pair			*ft_pairnew(char *index, void *data);
void			ft_pairdel(t_pair *pair);

#endif