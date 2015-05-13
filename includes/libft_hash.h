/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_hash.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 15:39:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HASH_H
# define LIBFT_HASH_H

# define EXTEND_HASH(type)	struct {EXTEND_LST(type); void *key; size_t keysize}

typedef struct	s_hash
{
	EXTEND_HASH	(s_hash);
	void		*data;
	size_t		size;
}				t_hash;

#endif
