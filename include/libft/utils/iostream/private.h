/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:21:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/12/14 14:00:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IOSTREAM_PRIVATE_H
# define LIBFT_IOSTREAM_PRIVATE_H

# include <stddef.h>
# include "libft/containers/list.h"
# include "libft/utils/iostream.h"

ssize_t			_ft_ios_read_to_end(t_ios *ios, void *dst, size_t n,
					void *(*get_end)(void *mem, size_t size));
size_t			_ft_ios_stock_to_end(t_ios *ios, t_lst **stock,
					void *(*get_end)(void *, size_t));

size_t			_ft_ios_copy_buff(t_ios *ios, void *dst, size_t n);
size_t			_ft_ios_copy_stock(t_ios *ios, t_lst *stock, void *dst,
					size_t n);

#endif
