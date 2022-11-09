SRCS	=	ft_printf.c \
			c.c \
			s.c \
			di.c \
			u.c \
			p.c \
			ft_puthex.c \

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			make bonus -C ./libft
			cp ./libft/libft.a ${NAME}
			ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}
		make fclean -C ./libft

fclean:		clean
		${RM} ${NAME}

re:			fclean all

test: all
		${CC} ${CFLAGS} ${SRCS} printf_test.c -L. -lftprintf
		./a.out
		rm a.out &&  rm *.o
		make fclean

.PHONY:		all clean fclean re
