/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 15:28:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/30 19:50:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @file			arrays.h
** @brief			C arrays management functions
**
** Functions to manage and convert the C native arrays.
*/

#ifndef LIBFT_ARRAYS_H
# define LIBFT_ARRAYS_H

# include "libft/containers/list.h"

/**
** @brief			Return the length of the given array
** @param array		A pointer to an array
** @return			The array length
*/
size_t			ft_arraylen(const void *array);

#endif
