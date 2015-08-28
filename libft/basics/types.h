/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 16:20:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 00:31:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPE_H
# define LIBFT_TYPE_H

# include <stddef.h>

typedef int		t_type;

# define TYPE_UNKNOW		(0)

# define TYPE_BOOL			(1)
# define TYPE_NBR			(2)
# define TYPE_LLONG			(3)
# define TYPE_ULLONG		(4)
# define TYPE_PTR			(5)

# define TYPE_CHR			(6)
# define TYPE_STR			(7)

# define TYPE_WCHR			(8)
# define TYPE_WSTR			(9)

# define TYPE_LST			(10)
# define TYPE_ILST			(11)
# define TYPE_KLST			(12)

# define TYPE_MT			(13)
# define TYPE_STCK			(14)

# define TYPE_TRM			(15)
# define TYPE_TPS			(16)
# define TYPE_EVNT			(17)
# define TYPE_ESRC			(18)

typedef struct	s_tdata
{
	void		*data;
	t_type		type;
}				t_tdata;

typedef struct	s_sdata
{
	void		*data;
	size_t		size;
}				t_sdata;

t_tdata			*ft_tdatanew(t_type type, void *data);
t_sdata			*ft_sdatanew(size_t size, void *data);

#endif
