/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:32:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:37:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WSTR_H
# define LIBFT_WSTR_H

# include <stddef.h>

size_t			ft_wstrsize(const wchar_t *ws);
size_t			ft_wstrnsize(const wchar_t *ws, size_t n);

void			ft_putwstr(const wchar_t *ws);
void			ft_putnwstr(const wchar_t *ws, size_t n);
void			ft_putnbwstr(const wchar_t *ws, size_t byte_nbr);

#endif
