# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 12:28:03 by sunnoh            #+#    #+#              #
#    Updated: 2023/09/11 23:20:23 by sunnoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Werror -Wextra -Wall ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -cr libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
