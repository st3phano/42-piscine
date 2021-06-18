SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HDRS	= includes
OBJS	= ${SRCS:.c=.o}
LIB		= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c
AR		= ar -r
RM		= rm -f

all: ${LIB}

${LIB}: ${OBJS}
	${AR} $@ ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -I ${HDRS} $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${LIB}

re: fclean all