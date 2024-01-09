CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

AR = ar rcs

SRCS = ft_printf.c ft_strlen.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putu.c\
	ft_putadd.c

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