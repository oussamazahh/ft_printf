# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahidi <ozahidi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 14:25:23 by ozahidi           #+#    #+#              #
#    Updated: 2024/01/12 21:19:49 by ozahidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

AR = ar rcs

SRCS = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putu.c\
	ft_putadd.c ft_puthex.c

OBJS = ${SRCS:.c=.o}

%.o: %.c ft_printf.h
	${CC} -o $@ -c $<

all : ${NAME}

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY : all clean fclean re