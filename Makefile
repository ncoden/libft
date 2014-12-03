# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2014/12/02 14:45:49 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCDIR = src
OBJDIR = obj
INCDIR = includes

SRC = ft_2dposnew.c\
	  ft_2dposset.c\
	  ft_2dsizenew.c\
	  ft_2dsizeset.c\
	  ft_3dangnew.c\
	  ft_3dangset.c\
	  ft_3dcamnew.c\
	  ft_3denvnew.c\
	  ft_3dposnew.c\
	  ft_3dposset.c\
	  ft_3dto2dpos.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_degtorad.c\
	  ft_envnew.c\
	  ft_errnew.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_itoa.c\
	  ft_lstaddfront.c\
	  ft_lstaddafter.c\
	  ft_lstaddby.c\
	  ft_lstaddback.c\
	  ft_lstaddrby.c\
	  ft_lstccpy_tostr.c\
	  ft_lstcpy_tostr.c\
	  ft_lstdel.c\
	  ft_lstdelone.c\
	  ft_lstdup.c\
	  ft_lstfold.c\
	  ft_lstiter.c\
	  ft_lstlen.c\
	  ft_lstln.c\
	  ft_lstlnafter.c\
	  ft_lstlnback.c\
	  ft_lstlnby.c\
	  ft_lstlnfront.c\
	  ft_lstlnrby.c\
	  ft_lstmap.c\
	  ft_lstnew.c\
	  ft_lstpushafter.c\
	  ft_lstpushback.c\
	  ft_lstpushby.c\
	  ft_lstpushfront.c\
	  ft_lstpushrby.c\
	  ft_lstshift.c\
	  ft_lsttotab.c\
	  ft_max.c\
	  ft_memalloc.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memdel.c\
	  ft_memdup.c\
	  ft_memequ.c\
	  ft_memlen.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_memsub.c\
	  ft_min.c\
	  ft_nbrlen.c\
	  ft_power.c\
	  ft_print3dline.c\
	  ft_printline.c\
	  ft_printsqr.c\
	  ft_printvec.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putnbrleft.c\
	  ft_putnbrright.c\
	  ft_putnchar.c\
	  ft_putnstr.c\
	  ft_putspace.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_putstrleft.c\
	  ft_putstrright.c\
	  ft_radtodeg.c\
	  ft_readline.c\
	  ft_readtolst.c\
	  ft_readtotab.c\
	  ft_strcat.c\
	  ft_strccpy.c\
	  ft_strchr.c\
	  ft_strclr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdel.c\
	  ft_strdiv.c\
	  ft_strdjoin.c\
	  ft_strdup.c\
	  ft_strequ.c\
	  ft_stricpy.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlen.c\
	  ft_strlstjoin.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnequ.c\
	  ft_strnew.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strsplit.c\
	  ft_strsplit_tolst.c\
	  ft_strstr.c\
	  ft_strsub.c\
	  ft_strtrim.c\
	  ft_tablen.c\
	  ft_tabtolst.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_vecnew.c\
	  ft_vecset.c

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
INCS = $(addprefix -I , $(INCDIR))

all: $(NAME)
$(NAME): build $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
build:
	@mkdir -p $(OBJDIR)
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@$(CC) -c -o $@ $< $(INCS) $(CFLAGS)

