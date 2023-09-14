# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 13:43:58 by sunnoh            #+#    #+#              #
#    Updated: 2023/09/13 21:17:08 by sunnoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = cc
CFLAG = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

all: ${TARGET}

.c.o:
	${CC} ${CFLAG} -I includes -c $< -o ${<:.c=.o}

${TARGET} : ${OBJS}
	ar rcs ${TARGET} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
