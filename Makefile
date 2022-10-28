SRCS	=	ft_printf.c \

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

fclean:		clean
		${RM} ${NAME}

re:			fclean all

test: all
		${CC} ${CFLAGS} print_test.c ft_printf.h  -L. -lftprintf
		./a.out
		rm a.out && rm *.gch && rm *.o

.PHONY:		all clean fclean re
