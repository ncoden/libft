/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_wstr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 15:32:36 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 18:26:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WSTR_H
# define LIBFT_WSTR_H

size_t			ft_wstrlen(const wchar_t *wstr);

void			ft_putwstr(const wchar_t *wstr);
size_t			ft_putiwstr(const wchar_t *wstr);
void			ft_putnwstr(const wchar_t *wstr, int n);
void			ft_putwstrleft(const wchar_t *wstr, size_t min_len);
void			ft_putwstrright(const wchar_t *wstr, size_t min_len);

#endif
