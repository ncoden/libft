/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_err.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:58:33 by ncoden            #+#    #+#             */
/*   Updated: 2015/01/14 16:47:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ERR_H
# define LIBFT_ERR_H

typedef struct	s_err
{
	int		err;
	char	*mess;
}				t_err;

t_err			*ft_errnew(int err, char *mess);

#endif
