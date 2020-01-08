# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egallego <egallego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:48:33 by egallego          #+#    #+#              #
#    Updated: 2020/01/08 17:45:20 by egallego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memset.c ft_memcpy.c ft_bzero.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strdup.c ft_tolower.c ft_toupper.c ft_isprint.c ft_calloc.c ft_split.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strncpy.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

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
