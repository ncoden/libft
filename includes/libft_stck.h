/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_stck.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/03 17:55:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STCK_H
# define LIBFT_STCK_H

# define STCK_SIZE			(8)

struct s_stck_node;

typedef struct	s_stck
{
	struct s_stck_node	*next;
	void				**datas;
	int					count;
	int					head;
	int					size;
}				t_stck;

typedef struct	s_stck_node
{
	struct s_stck_node	*next;
	void				**datas;
}				t_stck_node;

t_stck			*ft_stcknew(int size);

t_bool			ft_stckpush(t_stck **astck, void *data);
void			*ft_stckpull(t_stck **astck);

void			*ft_stckhead(t_stck *stck);
void			*ft_stckget(t_stck *stck, int index);
void			*ft_stcksrc(t_stck *stck, t_bool (*func)(void *, void *),
					void *data);

void			ft_stckiter(t_stck *stck, void (*func)(void *));
t_bool			ft_stckwhile(t_stck *stck, t_bool (*func)(void *));
t_bool			ft_stckuntil(t_stck *stck, t_bool (*func)(void *));

t_ilst			*ft_stckilstget(t_stck *stck, int index);

#endif
