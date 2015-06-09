/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_trm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 09:57:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/09 19:15:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TRM_H
# define LIBFT_TRM_H

# include <term.h>
# include <termios.h>
# include <curses.h>
# include <sys/ioctl.h>
# include <signal.h>

# define TRM_STACTIVE		(1)
# define TRM_STREADING		(2)

struct s_mt_tps;

typedef struct		s_trm
{
	struct termios	opts;
	void			(*on_start)(struct s_mt_tps *);
	void			(*on_stop)(struct s_mt_tps *);
	t_klst_evnt		*on_key;
	t_ilst_evnt		*on_signal;
	t_bool			inherit_key;
	t_bool			inherit_signal;
}					t_trm;

typedef struct		s_mt_tps
{
	EXTEND_MT		(s_mt_tps);
	struct s_mt_tps	*father;
	t_trm			*trm;
	int				status;
}					t_mt_tps;

int					g_trm_stdin;
int					g_trm_stdout;

t_mt_tps			*g_trm_current;
t_mt_tps			*g_trm_tpss;

t_trm				*ft_trmnew(void);
t_bool				ft_trmset(t_trm *trm);
t_bool				ft_trmstart(t_trm *trm);
t_bool				ft_trmstop(t_mt_tps *tps);

int					ft_trmgetin(void);
int					ft_trmgetout(void);
void				ft_trmclosein(void);
void				ft_trmcloseout(void);

int					ft_trmwidth(void);
int					ft_trmheight(void);

void				ft_putchr_trm(char c);
void				ft_putstr_trm(const char *s);
char				*ft_read_trm(void);

void				ft_trmputcmd(char *tc_cmd);
char				*ft_trmgetcmd(char *tc_cmd);
void				ft_trmclr(void);

void				ft_trmkeyhook(t_trm *trm, char *key, void (*func)(void *),
						void *data);
void				ft_trmkeycmd(t_trm *trm, char *key, char *tc_cmd);

void				ft_trmsignalhook(t_trm *trm, char sig, void (*func)(void *),
						void *data);
void				ft_trmsignalcmd(t_trm *trm, char sig, char *tc_cmd);

t_bool				ft_tpskeytrigger(t_mt_tps *tps, char *key);

#endif
