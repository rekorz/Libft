# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egallego <egallego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:48:33 by egallego          #+#    #+#              #
#    Updated: 2019/12/03 18:32:04 by egallego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memset.c ft_memcpy.c ft_bzero.c ft_memccpy.c ft_memmove.c
OBJS = ${SRCS:.c=.o};
RM = rm -rf

all: 		${NAME}

$(NAME):	${SRCS}
			${CC} ${CFLAGS} ${SRCS} 
			ar rc ${NAME} ${OBJS}
clean:
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean
