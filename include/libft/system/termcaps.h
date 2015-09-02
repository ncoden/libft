/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   termcaps.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 09:57:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/29 20:58:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TERMCAPS_H
# define LIBFT_TERMCAPS_H

# include <termios.h>
# include "libft/basics/booleans.h"
# include "libft/containers/tree.h"
# include "libft/utils/events.h"

# define TRM_STACTIVE			(1)
# define TRM_STREADING			(2)

# define TRM_KEY_ENTER			("\x0A")
# define TRM_KEY_ESC			("\x1B")
# define TRM_KEY_BKSP			("\x7F")
# define TRM_KEY_DEL			("\x1B\x5B\x33\x7E")
# define TRM_KEY_UP				("\x1B\x5B\x41")
# define TRM_KEY_DOWN			("\x1B\x5B\x42")
# define TRM_KEY_LEFT			("\x1B\x5B\x44")
# define TRM_KEY_RIGHT			("\x1B\x5B\x43")

struct s_mt_tps;

typedef struct		s_trm
{
	struct termios	opts;
	t_evnt			*on_start;
	t_evnt			*on_stop;
	t_evnt			*on_restore;
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
t_bool				ft_trmrestore(t_mt_tps *tps);

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
