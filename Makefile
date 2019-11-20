# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egallego <egallego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:48:33 by egallego          #+#    #+#              #
#    Updated: 2019/11/20 21:47:01 by egallego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
SRC = ft.memset.c 
OBJS = ${SRC:.c=.o}
RM = rm -rf
LIB	= ar rc
RLIB = ranlib

all: 		${NAME}

$(NAME):	${OBJ}
			${CC} ${CFLAGS} -o ${NAME} ${OBJ}

clean:
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		clean fclean