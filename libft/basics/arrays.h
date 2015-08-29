/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 15:28:52 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:28:14 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @file			arrays.h
** @brief			C arrays management functions
**
** Functions to manage and convert the C native arrays.
*/

#ifndef LIBFT_ARRAY_H
# define LIBFT_ARRAY_H

# include "libft/containers/list.h"

/**
** @brief			Return the length of the given array
** @param array		A pointer to an array
** @return			The array length
*/
size_t			ft_arraylen(void *array);

#endif
