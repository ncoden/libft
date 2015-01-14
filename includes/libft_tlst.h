/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tlst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:30:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 17:21:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TLST_H
# define LIBFT_TLST_H

typedef struct	s_tlist
{
	void			*content;
	t_type			type;
	struct s_tlist	*next;
}				t_tlist;

void			ft_tlstaddfront(t_tlist **alst, t_tlist *new);
void			ft_tlstaddback(t_tlist **alst, t_tlist *new);
t_tlist			*ft_tlstnew(void *content, t_type type);
t_tlist			*ft_tlstpushfront(t_tlist **alst, void *content, t_type type);
t_tlist			*ft_tlstpushback(t_tlist **alst, void *content, t_type type);

#endif
