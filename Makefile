# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2014/11/25 16:00:17 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCDIR = src
OBJDIR = obj
INCDIR = includes

SRC = ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_lstaddend.c\
	ft_lstccpy_tostr.c\
	ft_lstcpy_tostr.c\
	ft_lstdel.c\
	ft_lstdelone.c\
	ft_lstdup.c\
	ft_lstfold.c\
	ft_lstiter.c\
	ft_lstln.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstpushback.c\
	ft_lstpushfront.c\
	ft_lstshift.c\
	ft_memalloc.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memdel.c\
	ft_memequ.c\
	ft_memmove.c\
	ft_memset.c\
	ft_memsub.c\
	ft_putchar.c\
	ft_putendl.c\
	ft_putnbr.c\
   	ft_putstr.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_strcat.c\
	ft_strccpy.c\
	ft_strchr.c\
	ft_strclr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdel.c\
	ft_strdup.c\
	ft_strequ.c\
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
	ft_tolower.c\
	ft_toupper.c\
	ft_lstadd.c\
	ft_lstaddafter.c\
	ft_lstlnafter.c\
	ft_strdjoin.c\
	ft_stricpy.c\
	ft_memdup.c\
	ft_nbrlen.c\
	ft_putspace.c\
	ft_putnbrleft.c\
	ft_putnbrright.c\
	ft_putstrleft.c\
	ft_putstrright.c\
	ft_power.c\
	ft_putnstr.c\
	ft_putnchar.c\
	ft_lstlnfront.c\
	ft_lstlnback.c\
	ft_lstpushafter.c\
	ft_lstaddby.c\
	ft_lstpushby.c\
	ft_lstlnby.c\
	ft_lstaddrby.c\
	ft_lstpushrby.c\
	ft_lstlnrby.c\
	ft_min.c\
	ft_max.c

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

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
		@$(CC) -c -o $@ $< -I $(INCDIR) $(CFLAGS)

