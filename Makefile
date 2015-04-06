# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2015/04/05 14:30:04 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBDIR = lib
SRCDIR = src
OBJDIR = obj
INCDIR = includes

LIB = minilibx/libmlx.a
SRC =\
	bit/ft_bitget.c\
	bit/ft_bitset.c\
	chr/ft_chrpos.c\
	chr/ft_chrswitch.c\
	chr/ft_isalnum.c\
	chr/ft_isalpha.c\
	chr/ft_isascii.c\
	chr/ft_isdigit.c\
	chr/ft_isprint.c\
	chr/ft_putchr.c\
	chr/ft_putchr_fd.c\
	chr/ft_putnchr.c\
	chr/ft_putspace.c\
	chr/ft_tolower.c\
	chr/ft_toupper.c\
	env2d/ft_2denvnew.c\
	env2d/ft_2denvupdate.c\
	env2d/ft_2dposnew.c\
	env2d/ft_2dposset.c\
	env2d/ft_2dsizenew.c\
	env2d/ft_2dsizeset.c\
	env2d/ft_print2dline.c\
	env2d/ft_print2dline_left.c\
	env2d/ft_print2dline_right.c\
	env2d/ft_printline.c\
	env2d/ft_printsqr.c\
	env2d/ft_printvec.c\
	env3d/ft_3dangnew.c\
	env3d/ft_3dangset.c\
	env3d/ft_3dcamnew.c\
	env3d/ft_3denvdel.c\
	env3d/ft_3denvnew.c\
	env3d/ft_3denvprint.c\
	env3d/ft_3denvpush.c\
	env3d/ft_3denvupdate.c\
	env3d/ft_3dlinenew.c\
	env3d/ft_3dposnew.c\
	env3d/ft_3dposset.c\
	env3d/ft_3dto2dpos.c\
	env3d/ft_print3dline.c\
	err/ft_errdel.c\
	err/ft_errnew.c\
	frmt/ft_frmtiput.c\
	frmt/ft_frmtiputd.c\
	frmt/ft_frmtiputo.c\
	frmt/ft_frmtiputp.c\
	frmt/ft_frmtiputs.c\
	frmt/ft_frmtiputu.c\
	frmt/ft_frmtiputx.c\
	frmt/ft_frmtnew.c\
	frmt/ft_frmtoptsget.c\
	frmt/ft_frmtoptsset.c\
	frmt/ft_frmtput.c\
	frmt/ft_frmtputd.c\
	frmt/ft_frmtputo.c\
	frmt/ft_frmtputp.c\
	frmt/ft_frmtputs.c\
	frmt/ft_frmtputu.c\
	frmt/ft_frmtputx.c\
	frmt/ft_frmtset.c\
	img/ft_imgclr.c\
	img/ft_imgdel.c\
	img/ft_imgnew.c\
	img/ft_imgset.c\
	lst/ft_lstaddafter.c\
	lst/ft_lstaddback.c\
	lst/ft_lstaddby.c\
	lst/ft_lstaddfront.c\
	lst/ft_lstaddrby.c\
	lst/ft_lstccpy_tostr.c\
	lst/ft_lstcpy_tostr.c\
	lst/ft_lstdel.c\
	lst/ft_lstdelone.c\
	lst/ft_lstdup.c\
	lst/ft_lstfold.c\
	lst/ft_lstiter.c\
	lst/ft_lstlen.c\
	lst/ft_lstln.c\
	lst/ft_lstlnafter.c\
	lst/ft_lstlnback.c\
	lst/ft_lstlnby.c\
	lst/ft_lstlnfront.c\
	lst/ft_lstlnrby.c\
	lst/ft_lstmap.c\
	lst/ft_lstnew.c\
	lst/ft_lstpushafter.c\
	lst/ft_lstpushback.c\
	lst/ft_lstpushby.c\
	lst/ft_lstpushfront.c\
	lst/ft_lstpushrby.c\
	lst/ft_lstshift.c\
	lst/ft_lsttotab.c\
	mem/ft_bzero.c\
	mem/ft_getendian.c\
	mem/ft_memalloc.c\
	mem/ft_memccpy.c\
	mem/ft_memchr.c\
	mem/ft_memcmp.c\
	mem/ft_memcpy.c\
	mem/ft_memdel.c\
	mem/ft_memdup.c\
	mem/ft_memequ.c\
	mem/ft_memlen.c\
	mem/ft_memmove.c\
	mem/ft_memset.c\
	mem/ft_memsub.c\
	nbr/ft_atoi.c\
	nbr/ft_degtorad.c\
	nbr/ft_itoa.c\
	nbr/ft_llongbaselen.c\
	nbr/ft_llonglen.c\
	nbr/ft_max.c\
	nbr/ft_min.c\
	nbr/ft_nbrbaselen.c\
	nbr/ft_nbrlen.c\
	nbr/ft_power.c\
	nbr/ft_ptrbaselen.c\
	nbr/ft_ptrlen.c\
	nbr/ft_putllong.c\
	nbr/ft_putllongbase.c\
	nbr/ft_putllongdigits.c\
	nbr/ft_putllonghex.c\
	nbr/ft_putnbr.c\
	nbr/ft_putnbr_fd.c\
	nbr/ft_putnbrbase.c\
	nbr/ft_putnbrdigits.c\
	nbr/ft_putnbrhex.c\
	nbr/ft_putnbrleft.c\
	nbr/ft_putnbrright.c\
	nbr/ft_putptrbase.c\
	nbr/ft_putptrdigits.c\
	nbr/ft_putptrhex.c\
	nbr/ft_putullong.c\
	nbr/ft_putullongbase.c\
	nbr/ft_radtodeg.c\
	nbr/ft_ullongbaselen.c\
	nbr/ft_ullonglen.c\
	pair/ft_cpairnew.c\
	pair/ft_fpairnew.c\
	pair/ft_npairnew.c\
	pair/ft_pairdel.c\
	pair/ft_pairnew.c\
	prs/ft_prschr.c\
	prs/ft_prschrs.c\
	prs/ft_prsichrs.c\
	prs/ft_prsnbr.c\
	prs/ft_prsstr.c\
	prs/ft_prsxchrs.c\
	read/ft_readline.c\
	read/ft_readtolst.c\
	read/ft_readtotab.c\
	str/ft_putendl.c\
	str/ft_putendl_fd.c\
	str/ft_putistr.c\
	str/ft_putnstr.c\
	str/ft_putstr.c\
	str/ft_putstr_fd.c\
	str/ft_putstrleft.c\
	str/ft_putstrright.c\
	str/ft_strcat.c\
	str/ft_strccpy.c\
	str/ft_strchr.c\
	str/ft_strclr.c\
	str/ft_strcmp.c\
	str/ft_strcpy.c\
	str/ft_strdel.c\
	str/ft_strdiv.c\
	str/ft_strdjoin.c\
	str/ft_strdup.c\
	str/ft_strequ.c\
	str/ft_stricpy.c\
	str/ft_striter.c\
	str/ft_striteri.c\
	str/ft_strjoin.c\
	str/ft_strlcat.c\
	str/ft_strlen.c\
	str/ft_strlstjoin.c\
	str/ft_strmap.c\
	str/ft_strmapi.c\
	str/ft_strncat.c\
	str/ft_strncmp.c\
	str/ft_strncpy.c\
	str/ft_strnequ.c\
	str/ft_strnew.c\
	str/ft_strnstr.c\
	str/ft_strrchr.c\
	str/ft_strsplit.c\
	str/ft_strsplit_tolst.c\
	str/ft_strstr.c\
	str/ft_strsub.c\
	str/ft_strtrim.c\
	tab/ft_tablen.c\
	tab/ft_tabtolst.c\
	tlst/ft_tlstaddback.c\
	tlst/ft_tlstaddfront.c\
	tlst/ft_tlstnew.c\
	tlst/ft_tlstpushback.c\
	tlst/ft_tlstpushfront.c\
	uni/ft_utf8chrencode.c\
	uni/ft_utf8chrsize.c\
	uni/ft_utf8encode.c\
	uni/ft_utf8wencode.c\
	vec/ft_vecnew.c\
	vec/ft_vecset.c\
	wchr/ft_putwchr.c\
	wchr/ft_wchrbin.c\
	wstr/ft_putiwstr.c\
	wstr/ft_putnwstr.c\
	wstr/ft_putwstr.c\
	wstr/ft_putwstrleft.c\
	wstr/ft_putwstrright.c\
	wstr/ft_wstrlen.c

LIBS = $(addprefix $(LIBDIR)/, $(LIB))
LIBS_DIRS = $(sort $(dir $(LIBS)))

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o,$(SRC)))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCDIR += $(LIBS_DIRS)
INCS = $(addprefix -I , $(INCDIR))

all: $(NAME)
$(NAME): build $(LIBS) $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ar crsT $(NAME) $(NAME) $(LIBS)
	@ranlib $(NAME)
build:
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJS_DIRS)
clean:
	@rm -f $(LIBS)
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

$(LIBDIR)/%.a:
	@make -s -C $(@D)
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) -c -o $@ $< $(INCS) $(CFLAGS)