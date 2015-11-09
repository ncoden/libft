/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 14:27:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SIGNALS_PRIVATE_H
# define LIBFT_SIGNALS_PRIVATE_H

# include <stdint.h>
# include "libft/containers/list.h"
# include "libft/system/signals.h"

typedef struct	s_lst_sgnl_hook
{
	LST_BASE	(struct s_lst_sgnl_hook);
	void		*hook;
	enum		e_sgnl_hook_type
	{
		HOOK_SIG,
		HOOK_SIGS
	}			type;
}				t_lst_sgnl_hook;

int32_t			g_sgnl_mask;
t_lst_sgnl_hook	*g_sgnl_hooks;

void			sgnl_set_mask(int32_t mask);

#endif
