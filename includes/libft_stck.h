/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_stck.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 19:35:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STCK_H
# define LIBFT_STCK_H

typedef struct	s_stck
{
	struct s_stck	*next;
	char			count;
	char			size;
	void			**datas;
}				t_stck;

t_stck			*ft_stcknew(char size);

void			ft_stckpush(t_stck **astck, void *data);
void			*ft_stckpull(t_stck **astck);

void			*ft_stckhead(t_stck *stck);
int				ft_stckcount(t_stck *stck);

#endif
