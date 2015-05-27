/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_trm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 09:57:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/27 15:20:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TRM_H
# define LIBFT_TRM_H

# include <term.h>
# include <termios.h>
# include <curses.h>
# include <sys/ioctl.h>
# include <signal.h>

typedef struct		s_trm
{
	struct termios	opts;
	char			level;
	t_klst_evnt		*on_key_press;
	t_ilst_evnt		*on_signal;
}					t_trm;

typedef struct		s_mt_tps
{
	EXTEND_MT		(s_mt_tps);
	int				tid;
	t_trm			*trm;
}					t_mt_tps;

int					g_trm_tid;
t_mt_tps			*g_trm_tpss;

t_trm				*ft_trmnew(void);
t_bool				ft_trmset(t_trm *trm);
void				ft_trmstart(t_trm *trm);
void				ft_trmstop(t_trm *trm);

int					ft_trmgetout(void);
void				ft_trmcloseout(void);
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

#endif
