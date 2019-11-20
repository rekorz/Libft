NAME = libf
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c og.c tabber.c print_sol.c tools.c not_a_solver.c solver3_0.c
OBJS = ${SRC:.c=.o}
LIB = library.h

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 		${NAME}

$(NAME):	${OBJ} ${LIB}
			${CC} -o ${NAME} ${OBJ}

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

norme:
			norminette ${SRC} ${LIB}

.PHONY:		clean fclean norme