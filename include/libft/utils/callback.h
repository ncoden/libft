/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callback.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/07 15:36:58 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CALLBACK_H
# define LIBFT_CALLBACK_H

typedef struct	s_cb
{
	void		(*func)(void *data, void *res);
	void		*data;
}				t_cb;

t_cb			*ft_cbnew(void (*func)(void *, void *), void *data);
void			ft_cbset(t_cb *callback, void (*func)(void *, void *),
					void *data);
void			ft_cbcall(t_cb *callback, void *res);

#endif
