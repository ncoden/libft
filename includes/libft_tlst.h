/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tlst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:30:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/03 08:24:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TLST_H
# define LIBFT_TLST_H

typedef struct	s_tlst
{
	void			*content;
	t_type			type;
	struct s_tlst	*next;
}				t_tlst;

void			ft_tlstaddfront(t_tlst **alst, t_tlst *new);
void			ft_tlstaddback(t_tlst **alst, t_tlst *new);
t_tlst			*ft_tlstnew(void *content, t_type type);
t_tlst			*ft_tlstpushfront(t_tlst **alst, void *content, t_type type);
t_tlst			*ft_tlstpushback(t_tlst **alst, void *content, t_type type);

#endif
