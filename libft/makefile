# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 12:55:10 by ehafiane          #+#    #+#              #
#    Updated: 2023/11/16 13:04:32 by ehafiane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = #-Wall -Wextra -Werror 

SRCS =  ft_isalnum.c ft_isprint.c  ft_isalpha.c  ft_isdigit.c \
	ft_strncmp.c ft_strchr.c ft_tolower.c ft_bzero.c      \
	ft_isascii.c ft_strlen.c ft_strrchr.c ft_toupper.c    \
	ft_memset.c  ft_memcpy.c ft_strnstr.c ft_atoi.c       \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c\
	ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c       \
	ft_substr.c ft_strtrim.c ft_strjoin.c ft_itoa.c       \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c         \
	ft_strmapi.c ft_striteri.c ft_split.c                 \

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c   \
	 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	 ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJS = $(SRCS:.c=.o)

OBJ_b = $(SRC_B:.c=.o)

all: $(NAME)

bonus: $(OBJ_b)
	ar  rc $(NAME) $(OBJ_b)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(OBJ_b)

fclean: clean
	rm -f $(NAME)

re: fclean all