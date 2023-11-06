# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:29:42 by ksohail-          #+#    #+#              #
#    Updated: 2023/11/06 12:56:05 by ksohail-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = libft.a
src = ft_atoi.c ft_isascii.c ft_lstadd_front.c ft_lstnew.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_lstclear.c ft_lstsize.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_calloc.c ft_isprint.c ft_lstdelone.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c libft.h ft_isalnum.c ft_itoa.c ft_lstiter.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_isalpha.c ft_lstadd_back.c ft_lstlast.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c
OBJ_FILES = $(src:.c=.o)

all: $(OBJ)

$(OBJ): $(OBJ_FILES)
	ar	rcs	$(OBJ)	$(OBJ_FILES)

%.o: %.c
	$(cc)	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)