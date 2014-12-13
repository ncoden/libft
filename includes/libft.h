/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:59:44 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/09 00:02:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>

# define BUFF_SIZE 512
# define TRUE 1
# define FALSE 0

# define ABS(X) ((X > 0) ? X : -(X))
# define MAX(N, M) ((N > M) ? N : M)
# define MIN(N, M) ((N < M) ? N : M)
# define SIGN(X) ((X > 0) ? 1 : -1)
# define LIM(N, MN, MX) (MAX(MIN(N, MX), MN))

typedef char	t_bool;
typedef enum	e_type
{
	CHAR,
	INT,
	SIZE_T,
	FLOAT,
	DOUBLE,
	STR,
	MEM,
	T_2DPOS,
	T_2DLINE,
	T_2DSQR,
	T_3DPOS,
	T_3DLINE,
	T_3DCUBE
}				t_type;

typedef struct	s_list
{
	void			*content;
	size_t			size;
	struct s_list	*next;
}				t_list;
typedef struct	s_tlist
{
	void			*content;
	t_type			type;
	struct s_tlist	*next;
}				t_tlist;

typedef struct	s_fd
{
	int				fd;
	int				start;
	t_list			*lst;
	struct s_fd		*next;
}				t_fd;
typedef struct	s_err
{
	int		err;
	char	*mess;
}				t_err;

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

size_t			ft_nbrlen(int nbr);
int				ft_min(int nbr1, int nbr2);
int				ft_max(int nbr1, int nbr2);
int				ft_power(int nbr, int power);
double			ft_degtorad(double deg);
double			ft_radtodeg(double rad);

void			*ft_memalloc(size_t size);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memdup(const void *src, size_t size);
size_t			ft_memlen(void *mem, size_t memsize);
int				ft_memequ(const void *b1, const void *b2, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memsub(const void *b, unsigned int start, size_t len);

char			*ft_strnew(size_t size);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *str, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strccpy(char *dst, const char *src, char c, size_t n);
size_t			ft_stricpy(char *dest, const char *src);
void			ft_strdel(char **as);
char			**ft_strdiv(char *s, char c);
char			*ft_strdup(const char *src);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strdjoin(const char *s1, const char *d, const char *s2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *dest, const char *src, size_t nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t size);
char			*ft_strrchr(const char *str, int c);
char			**ft_strsplit(const char *s, char c);
t_list			*ft_strsplit_tolst(const char *s, char c);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strtrim(const char *s);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			ft_putchar(char c);
void			ft_putchar_fd(const char c, int fd);
void			ft_putnchar(char c, size_t n);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbrleft(int nbr, size_t min_len);
void			ft_putnbrright(int nbr, size_t min_len);
void			ft_putstr(const char *s);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putstrleft(const char *s, size_t min_len);
void			ft_putstrright(const char *s, size_t min_len);
void			ft_putnstr(const char *s, int n);
void			ft_putendl(const char *s);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putspace(size_t len);

void			ft_lstaddfront(t_list **alst, t_list *new);
void			ft_lstaddback(t_list **alst, t_list *new);
void			ft_lstaddafter(t_list *lst, t_list *new);
void			ft_lstaddby(t_list **alst, t_list *new,
					int (*f)(const void *, const void *, size_t, size_t));
void			ft_lstaddrby(t_list **alst, t_list *new,
					int (*f)(const void *, const void *, size_t, size_t));

t_list			*ft_lstnew(void const *content, size_t size);
t_list			*ft_lstpushfront(t_list **alst, const void *content,
					size_t size);
t_list			*ft_lstpushback(t_list **alst, const void *content,
					size_t size);
t_list			*ft_lstpushafter(t_list *lst, const void *content,
					size_t size);
t_list			*ft_lstpushby(t_list **alst, void *content, size_t size,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstpushrby(t_list **alst, void *content, size_t size,
					int (*f)(const void *, const void *, size_t, size_t));

t_list			*ft_lstln(void *content, size_t size);
t_list			*ft_lstlnfront(t_list **alst, void *content, size_t size);
t_list			*ft_lstlnback(t_list **alst, void *content, size_t size);
t_list			*ft_lstlnafter(t_list *lst, void *content,
					size_t size);
t_list			*ft_lstlnby(t_list **alst, void *content, size_t size,
					int (*f)(const void *, const void *, size_t, size_t));
t_list			*ft_lstlnrby(t_list **alst, void *content, size_t size,
					int (*f)(const void *, const void *, size_t, size_t));

char			*ft_lstcpy_tostr(t_list *lst, char *dst, size_t n);
char			*ft_lstccpy_tostr(t_list *lst, char *dst, char c, size_t n);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstdup(t_list *lst);
void			*ft_lstfold(t_list *lst,
					void *(*f)(const void *, const void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char			*ft_strlstjoin(t_list *lst);
int				ft_lstlen(t_list *lst);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstshift(t_list **alst);

void			**ft_lsttotab(t_list *lst);
t_list			*ft_tabtolst(void **tab);
size_t			ft_tablen(void *tab);

void			ft_tlstaddfront(t_tlist **alst, t_tlist *new);
void			ft_tlstaddback(t_tlist **alst, t_tlist *new);
t_tlist			*ft_tlstnew(void *content, t_type type);
t_tlist			*ft_tlstpushfront(t_tlist **alst, void *content,
					t_type type);
t_tlist			*ft_tlstpushback(t_tlist **alst, void *content,
					t_type type);

int				ft_readline(int fd, char **line);
t_list			*ft_readtolst(int fd);
char			**ft_readtotab(int fd);

typedef struct	s_img
{
	void	*data;
	char	*buff;
	int		bpp;
	t_bool	endian;
	size_t	size_x;
}				t_img;

typedef struct	s_2dpos
{
	int		x;
	int		y;
}				t_2dpos;
typedef struct	s_2dsize
{
	size_t	x;
	size_t	y;
}				t_2dsize;
typedef struct	s_vec
{
	t_2dpos	pos;
	int		len;
	double	ang;
}				t_vec;
typedef struct	s_2dline
{
	t_2dpos	from;
	t_2dpos to;
	int		color;
}				t_2dline;
typedef struct	s_2dcam
{
	t_2dpos		pos;
	double		ang;
	int			d;
	t_2dsize	view;
}				t_2dcam;
typedef struct	s_2denv
{
	void	*mlx;
	void	*win;
	t_img	img;
	t_2dcam	*cam;
	t_tlist	*obj;
}				t_2denv;

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
	t_tlist	*obj;
}				t_3denv;

t_bool			ft_getendian();
t_img			*ft_imgnew(void *mlx, size_t x, size_t y);
t_bool			ft_imgset(t_img *img, void *mlx, size_t x, size_t y);
void			ft_imgclr(t_img *img, void *mlx);
void			ft_imgdel(t_img *img, void *mlx);

t_2denv			*ft_2denvnew(void *mlx, size_t x, size_t y, char *title);
void			ft_2denvupdate(t_2denv *e);
t_2dpos			*ft_2dposnew(int x, int y);
t_2dsize		*ft_2dsizenew(size_t x, size_t y);
void			ft_2dsizeset(t_2dsize *size, size_t x, size_t y);
void			ft_2dposset(t_2dpos *pos, int x, int y);
t_vec			*ft_vecnew(t_2dpos *pos, int len, double ang);
void			ft_vecset(t_vec *vec, t_2dpos *pos, int len, double ang);

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
t_tlist			*ft_3denvpush(t_3denv *e, void *content, t_type type);
void			ft_3denvprint(t_3denv *e);

void			ft_print2dline(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant1(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant2(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant3(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant4(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant5(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant6(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant7(t_2denv *e, t_2dline *line);
inline void		ft_print2dline_octant8(t_2denv *e, t_2dline *line);
void			ft_printline(t_2denv *e, t_2dpos *from, t_2dpos *to, int color);
void			ft_printsqr(t_2denv *e, t_2dpos *from, t_2dpos *to, int color);
void			ft_printvec(t_2denv *e, t_vec *vec, int color);
void			ft_print3dline(t_3denv *e, t_3dline *line);

t_err			*ft_errnew(int err, char *mess);

#endif
