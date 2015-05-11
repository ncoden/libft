/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_3denv.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 11:03:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/03 08:09:04 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_3DENV_H
# define LIBFT_3DENV_H

# include "libft_core.h"
# include "libft_2denv.h"
# include "libft_img.h"

typedef enum	e_type
{
	T_3DLINE,
}				t_pos;

typedef struct	s_3dpos
{
	int		x;
	int		y;
	int		z;
}				t_3dpos;

typedef struct	s_3dang
{
	double	x;
	double	y;
	double	z;
}				t_3dang;

typedef struct	s_3dline
{
	t_3dpos	from;
	t_3dpos to;
	int		color;
}				t_3dline;

typedef struct	s_3dcam
{
	t_3dpos		pos;
	t_3dang		ang;
	int			d;
	t_2dsize	view;
}				t_3dcam;

typedef struct	s_3denv
{
	void	*mlx;
	void	*win;
	t_img	img;
	t_3dcam	*cam;
	t_tlst	*obj;
}				t_3denv;

t_3denv			*ft_3denvnew(void *mlx, size_t x, size_t y, char *title);
void			ft_3denvupdate(t_3denv *e);
void			ft_3denvdel(t_3denv *e);
t_3dcam			*ft_3dcamnew(t_3dpos *pos, t_3dang *ang, int d, t_2dsize *view);
t_3dpos			*ft_3dposnew(int x, int y, int z);
void			ft_3dposset(t_3dpos *pos, int x, int y, int z);
t_3dang			*ft_3dangnew(double x, double y, double z);
void			ft_3dangset(t_3dang *ang, double x, double y, double z);
t_3dline		*ft_3dlinenew(t_3dpos *from, t_3dpos *to, int color);
void			ft_3dto2dpos(t_3denv *e, t_3dpos *pos3d, t_2dpos *pos2d);
t_tlst			*ft_3denvpush(t_3denv *e, void *data, t_type type);
void			ft_3denvprint(t_3denv *e);

void			ft_print3dline(t_3denv *e, t_3dline *line);

#endif
