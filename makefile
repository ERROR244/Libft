# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:29:42 by ksohail-          #+#    #+#              #
#    Updated: 2023/11/01 14:50:51 by ksohail-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = gcc
CFLAGS= -Wall -Wextra -Werror -g

all:
	cc -Wall -Wextra -Werror ft_strnstr.c ft_strlen.c ft_strncmp.c
vm:
	vim makefile
c:
	clear
1:
	vim ft_strnstr.c
2:
	vim ft_strlen.c
3:
	vim ft_strncmp.c
4:
	rm a.out
