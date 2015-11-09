/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 02:48:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SIGNALS_H
# define LIBFT_SIGNALS_H

# include <stdint.h>
# include "libft/basics/booleans.h"
# include "libft/utils/callback.h"
# include "libft/utils/events.h"

typedef struct	s_hook_sig
{
	t_evnt		*event;
	int			sig;
}				t_hook_sig;

typedef struct	s_hook_sigs
{
	t_cb		*callback;
	int32_t		sigs;
}				t_hook_sigs;

t_hook_sig		*ft_sighook(int sig, t_evnt *event);
t_hook_sig		*ft_signew(int sig, t_evnt *event);
t_bool			ft_sigadd(t_hook_sig *hook);
void			ft_sigrem(t_hook_sig *hook);
void			ft_sigdel(t_hook_sig *hook, void (*del)(void *));

t_hook_sigs		*ft_sigshook(int32_t sigs, t_cb *callback);
t_hook_sigs		*ft_sigsnew(int32_t sigs, t_cb *callback);
t_bool			ft_sigsadd(t_hook_sigs *hook);
void			ft_sigsrem(t_hook_sigs *hook);
void			ft_sigsdel(t_hook_sigs *hook, void (*del)(void *));

void			ft_sigtrigger(int sig);

void			ft_sigupdate(void);

#endif
