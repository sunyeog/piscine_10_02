# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 14:35:55 by sunnoh            #+#    #+#              #
#    Updated: 2023/09/14 19:55:15 by sunnoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = do-op
CC = cc
CFLAG = -Wall -Wextra -Werror
SRCS = main.c cal.c atoi.c
OBJS = ${SRCS:.c=.o}

all: ${TARGET}

$(TARGET): 
	${CC} ${CFLAG} -o ${TARGET} ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
