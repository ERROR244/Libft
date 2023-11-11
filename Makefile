# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:29:42 by ksohail-          #+#    #+#              #
#    Updated: 2023/11/10 20:49:08 by ksohail-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS = ft_atoi.c ft_isascii.c ft_memmove.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_calloc.c ft_isprint.c ft_memchr.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_isalnum.c ft_itoa.c ft_lstiter.c ft_memcmp.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_isalpha.c ft_memcpy.c ft_striteri.c ft_strmapi.c ft_substr.c
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstadd_front.c ft_lstnew.c ft_putstr_fd.c ft_lstclear.c ft_lstsize.c ft_lstdelone.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstadd_back.c ft_lstlast.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
