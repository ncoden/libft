/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_stck.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 12:10:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STCK_H
# define LIBFT_STCK_H

# define STCK_SIZE			(8)

typedef struct	s_stck
{
	struct s_stck	*next;
	int				count;
	int				size;
	void			**datas;
}				t_stck;

t_stck			*ft_stcknew(int size);

t_bool			ft_stckpush(t_stck **astck, void *data);
void			*ft_stckpull(t_stck **astck);
t_bool			ft_stckshift(t_stck **astck);

void			*ft_stckhead(t_stck *stck);
int				ft_stckcount(t_stck *stck);

void			ft_stckiter(t_stck *stck, void (*func)(void *));
t_bool			ft_stckwhile(t_stck *stck, t_bool (*func)(void *));
t_bool			ft_stckuntil(t_stck *stck, t_bool (*func)(void *));

#endif
