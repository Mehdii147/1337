# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 12:55:10 by ehafiane          #+#    #+#              #
#    Updated: 2023/11/03 16:35:14 by ehafiane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_isalnum.c ft_isprint.c \
        ft_strncmp.c ft_isalpha.c ft_strchr.c ft_tolower.c \
        ft_isascii.c ft_strlen.c ft_strrchr.c ft_toupper.c \
        ft_isdigit.c ft_memset.c ft_bzero.c  ft_memcpy.c\
		ft_memmove.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all