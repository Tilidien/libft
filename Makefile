# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 17:12:52 by tgmelin           #+#    #+#              #
#    Updated: 2024/11/24 21:00:01 by tgmelin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../libft.a
DEPS = libft.h
CFLAGS = -Wall -Wextra -Werror
SRC  = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_iswhitespace.c ft_freeptrarr.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
ft_lstmap.c ft_printf.c ft_printf_utils.c ft_dprintf_utils.c \
ft_dprintf.c ft_memclr.c ft_error.c ft_lstcount.c ft_lstpop.c \
get_next_line.c get_next_line_utils.c ft_lstremove_where.c ft_iffree.c \
nop.c ft_isint32.c ft_countstrchr.c ft_strtrim_local.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(DEPS) $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
