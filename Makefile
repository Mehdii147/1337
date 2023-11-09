# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 12:55:10 by ehafiane          #+#    #+#              #
#    Updated: 2023/11/09 19:25:56 by ehafiane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS =  ft_isalnum.c ft_isprint.c \
        ft_strncmp.c ft_isalpha.c ft_strchr.c ft_tolower.c \
        ft_isascii.c ft_strlen.c ft_strrchr.c ft_toupper.c \
        ft_isdigit.c ft_memset.c ft_bzero.c  ft_memcpy.c\
        ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_atoi.c\
        ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_strnstr.c \
        ft_substr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all