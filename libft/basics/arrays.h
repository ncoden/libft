/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 15:28:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:45:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ARRAY_H
# define LIBFT_ARRAY_H

# include "libft/containers/list.h"

size_t			ft_arraylen(void *array);
t_lst			*ft_arraytolst(void **array);

#endif
