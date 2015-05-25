# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2015/05/25 17:43:41 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# COMPILATION
CC = gcc
CCFLAGS = -Wall -Werror -Wextra

ASM = ~/.brew/Cellar/nasm/dev/bin/nasm
# dev : NASM v2.11.08 modified to accept extern redeclaration as global
ASMFLAGS = -f macho64

LNK = gcc
LNKFLAGS = -ltermcap

# DIRECTORIES
LIBDIR = lib
SRCDIR = src
OBJDIR = obj
INCDIR = includes

# SOURCES
LIB = minilibx/libmlx.a
SRC =\
	array/ft_arraylen.c\
	array/ft_arraytolst.c\
	bit/ft_bitget.c\
	bit/ft_bitset.c\
	chr/ft_chrpos.c\
	chr/ft_chrswitch.c\
	chr/ft_isalnum.s\
	chr/ft_isalpha.s\
	chr/ft_isascii.s\
	chr/ft_isdigit.s\
	chr/ft_isprint.s\
	chr/ft_putchr.s\
	chr/ft_putchr_fd.s\
	chr/ft_putnchr.c\
	chr/ft_putspace.c\
	chr/ft_tolower.s\
	chr/ft_toupper.s\
	env/ft_envget.c\
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
	evnt/ft_evntcall.c\
	evnt/ft_evntnew.c\
	evnt/ft_evntset.c\
	evnt/ft_ievnttrigger.c\
	evnt/ft_ievntstrigger.c\
	evnt/ft_kevnttrigger.c\
	evnt/ft_kevntstrigger.c\
	file/ft_putfile.s\
	file/ft_readline.c\
	file/ft_readstop.c\
	file/ft_readtoarray.c\
	file/ft_readtolst.c\
	frmt/ft_frmtnew.c\
	frmt/ft_frmtoptsget.c\
	frmt/ft_frmtoptsset.c\
	frmt/ft_frmtput.c\
	frmt/ft_frmtputc.c\
	frmt/ft_frmtputd.c\
	frmt/ft_frmtputo.c\
	frmt/ft_frmtputp.c\
	frmt/ft_frmtputs.c\
	frmt/ft_frmtputu.c\
	frmt/ft_frmtputx.c\
	frmt/ft_frmtset.c\
	ilst/ft_ilstadd.c\
	ilst/ft_ilstcrush.c\
	ilst/ft_ilstdelone.c\
	ilst/ft_ilstget.c\
	ilst/ft_ilstinsert.c\
	ilst/ft_ilstinsert__.c\
	ilst/ft_ilstmerge.c\
	ilst/ft_ilstnew.c\
	ilst/ft_ilstnew__.c\
	ilst/ft_ilstprev.c\
	ilst/ft_ilstpush.c\
	ilst/ft_ilstpush__.c\
	ilst/ft_ilstrem.c\
	ilst/ft_ilstset.c\
	img/ft_imgclr.c\
	img/ft_imgdel.c\
	img/ft_imgnew.c\
	img/ft_imgset.c\
	klst/ft_klstadd.c\
	klst/ft_klstcrush.c\
	klst/ft_klstdelone.c\
	klst/ft_klstget.c\
	klst/ft_klstinsert.c\
	klst/ft_klstinsert__.c\
	klst/ft_klstmerge.c\
	klst/ft_klstnew.c\
	klst/ft_klstnew__.c\
	klst/ft_klstprev.c\
	klst/ft_klstpush.c\
	klst/ft_klstpush__.c\
	klst/ft_klstrem.c\
	klst/ft_klstset.c\
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
	lst/ft_lstmap.c\
	lst/ft_lstnew.c\
	lst/ft_lstpushafter.c\
	lst/ft_lstpushback.c\
	lst/ft_lstpushby.c\
	lst/ft_lstpushfront.c\
	lst/ft_lstpushrby.c\
	lst/ft_lstshift.c\
	lst/ft_lsttoarray.c\
	mem/ft_bzero.s\
	mem/ft_getendian.c\
	mem/ft_memalloc.c\
	mem/ft_memccpy.c\
	mem/ft_memchr.c\
	mem/ft_memcmp.c\
	mem/ft_memcpy.s\
	mem/ft_memdel.c\
	mem/ft_memdup.c\
	mem/ft_memequ.c\
	mem/ft_memlen.c\
	mem/ft_memmove.c\
	mem/ft_memset.s\
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
	nbr/ft_putnbr.s\
	nbr/ft_putnbr_fd.s\
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
	nbr/ft_putullongdigits.c\
	nbr/ft_putullonghex.c\
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
	sgnl/ft_sgnlclr.c\
	sgnl/ft_sgnlclrone.c\
	sgnl/ft_sgnlcrush.c\
	sgnl/ft_sgnldel.c\
	sgnl/ft_sgnldelone.c\
	sgnl/ft_sgnlget.c\
	sgnl/ft_sgnlhook.c\
	sgnl/ft_sgnlmerge.c\
	sgnl/ft_sgnlset.c\
	sgnl/ft_sgnltrigger.c\
	stck/ft_stcknew.c\
	stck/ft_stckcount.c\
	stck/ft_stckhead.c\
	stck/ft_stckiter.c\
	stck/ft_stckpull.c\
	stck/ft_stckpush.c\
	stck/ft_stckuntil.c\
	stck/ft_stckwhile.c\
	str/ft_putendl.c\
	str/ft_putendl_fd.c\
	str/ft_putistr.c\
	str/ft_putnstr.c\
	str/ft_putstr.s\
	str/ft_putstr_fd.s\
	str/ft_putstrleft.c\
	str/ft_putstrright.c\
	str/ft_strcat.s\
	str/ft_strccmp.c\
	str/ft_strccpy.c\
	str/ft_strchr.c\
	str/ft_strclr.c\
	str/ft_strcmp.c\
	str/ft_strcpy.s\
	str/ft_strdel.c\
	str/ft_strdiv.c\
	str/ft_strdjoin.c\
	str/ft_strdup.s\
	str/ft_strequ.c\
	str/ft_stricpy.c\
	str/ft_striter.c\
	str/ft_striteri.c\
	str/ft_strjoin.c\
	str/ft_strlcat.c\
	str/ft_strlen.s\
	str/ft_strlstjoin.c\
	str/ft_strmap.c\
	str/ft_strmapi.c\
	str/ft_strncat.c\
	str/ft_strncmp.c\
	str/ft_strncpy.c\
	str/ft_strnequ.c\
	str/ft_strnew.c\
	str/ft_strnlen.c\
	str/ft_strnstr.c\
	str/ft_strrchr.c\
	str/ft_strsplit.c\
	str/ft_strsplit_tolst.c\
	str/ft_strstr.c\
	str/ft_strsub.c\
	str/ft_strtrim.c\
	tlst/ft_tlstaddback.c\
	tlst/ft_tlstaddfront.c\
	tlst/ft_tlstnew.c\
	tlst/ft_tlstpushback.c\
	tlst/ft_tlstpushfront.c\
	trm/ft_putchr_trm.c\
	trm/ft_putstr_trm.c\
	trm/ft_read_trm.c\
	trm/ft_trmcloseout.c\
	trm/ft_trmclr.c\
	trm/ft_trmgetcmd.c\
	trm/ft_trmgetout.c\
	trm/ft_trmkeycmd.c\
	trm/ft_trmkeyhook.c\
	trm/ft_trmstart.c\
	trm/ft_trmnew.c\
	trm/ft_trmputcmd.c\
	trm/ft_trmread.c\
	trm/ft_trmset.c\
	trm/ft_trmsignalcmd.c\
	trm/ft_trmsignalhook.c\
	trm/ft_trmstop.c\
	uni/ft_getunicode.c\
	uni/ft_putnbwstr_utf8.c\
	uni/ft_putnwstr_utf8.c\
	uni/ft_putwchr_utf8.c\
	uni/ft_putwstr_utf8.c\
	uni/ft_setunicode.c\
	uni/ft_utf8chrencode.c\
	uni/ft_utf8chrsize.c\
	uni/ft_utf8encode.c\
	uni/ft_utf8wencode.c\
	uni/ft_wchrsize_utf8.c\
	uni/ft_wstrnsize_utf8.c\
	uni/ft_wstrsize_utf8.c\
	vec/ft_vecnew.c\
	vec/ft_vecset.c\
	wchr/ft_putwchr.c\
	wchr/ft_wchrbin.c\
	wchr/ft_wchrsize.c\
	wstr/ft_putnbwstr.c\
	wstr/ft_putnwstr.c\
	wstr/ft_putwstr.c\
	wstr/ft_wstrnsize.c\
	wstr/ft_wstrsize.c


# **************************************************************************** #

# DEBUG
DEVNAME = libft
DEVMAIN = main.c

# ALLOWED EXTENSIONS
EXTENSIONS = .c .s


# **************************************************************************** #

.PHONY: all $(NAME) build clean fclean re dev
.SILENT:

LIBS = $(addprefix $(LIBDIR)/, $(LIB))

SRC := $(filter $(addprefix %, $(EXTENSIONS)), $(SRC))
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS_DIRS += $(addsuffix /, $(dir $(LIBS)))
INCS = $(addprefix -I , $(INCS_DIRS))

TEMPNAME = $(addprefix $(OBJDIR)/, $(NAME))
DEVMAIN_OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(DEVMAIN))))

all: $(NAME)
$(NAME): build $(LIBS) $(OBJS)
	ar rc $(TEMPNAME) $(OBJS)
	libtool -static -o $(NAME) $(TEMPNAME) $(LIBS)
	ranlib $(NAME)
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(TEMPNAME)
	rm -f $(LIBS)
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

dev: build $(LIBS) $(OBJS) $(DEVMAIN_OBJ)
	$(LNK) -o $(DEVNAME) $(LIBS) $(OBJS) $(DEVMAIN_OBJ) $(INCS) $(LNKFLAGS)
	./$(DEVNAME)

$(LIBDIR)/%.a:
	make -s -C $(@D)
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c -o $@ $< $(INCS) $(CCFLAGS)
$(OBJDIR)/%.o: $(SRCDIR)/%.s
	$(ASM) -o $@ $< $(INCS) $(ASMFLAGS)
