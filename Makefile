# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbarbero <rbarbero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:15:31 by rbarbero          #+#    #+#              #
#    Updated: 2017/12/04 15:33:38 by rbarbero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	   ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
	   ft_atoi.c ft_isupper.c ft_islower.c ft_isalpha.c ft_isdigit.c \
	   ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	   ft_isspace.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
	   ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	   ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	   ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
	   ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	   ft_lstiter.c ft_lstmap.c ft_strsplittolst.c ft_lstnewnode.c \
	   ft_lstpushback.c ft_lstsize.c get_next_line.c ft_char_encode_utf8.c \
	   ft_char_decode_utf8.c
OBJS = $(SRCS:%.c=%.o)
HEADERS_DIR = includes/
HEADERS = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

debug: CFLAGS += -g
debug: all

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $^

$(OBJS): %.o: %.c $(HEADERS_DIR)$(HEADERS)
	$(CC) $(CFLAGS) -o $@ -I $(HEADERS_DIR) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
