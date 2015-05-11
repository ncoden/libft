/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ilst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/11 20:58:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ILST_H
# define LIBFT_ILST_H

# define EXTEND_ILST(type)	struct {EXTEND_LST(type); char *index;}

typedef struct	s_ilst
{
	EXTEND_ILST	(s_ilst);
	void		*data;
	size_t		size;
}				t_ilst;

#endif
