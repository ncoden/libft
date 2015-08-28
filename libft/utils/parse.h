/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 18:32:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:18:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRS_H
# define LIBFT_PRS_H

# include "libft/basics/bits.h"
# include "libft/basics/booleans.h"

t_bool			ft_prsnbr(char **cursor, int *nbr);
t_bool			ft_skpnbr(char **cursor);

unsigned int	ft_prschr(char **cursor, char c);
t_bits			ft_prschrs(char **cursor, const char *chrs);
t_bits			*ft_prsxchrs(char **cursor, const char *chrs);
unsigned int	*ft_prsichrs(char **cursor, const char *chrs);
unsigned int	ft_prsstr(char **cursor, const char *str);

#endif
