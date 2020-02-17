# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egallego <egallego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:48:33 by egallego          #+#    #+#              #
#    Updated: 2020/02/17 17:48:07 by egallego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memset.c ft_memcpy.c ft_bzero.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strdup.c ft_tolower.c ft_toupper.c ft_isprint.c ft_calloc.c ft_split.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strncpy.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

B_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

OBJS = ${SRCS:.c=.o};
B_OBJS = ${B_SRCS:.c=.o};
RM = rm -rf

all: 		${NAME}

$(NAME):	${SRCS}
			${CC} ${CFLAGS} ${SRCS} 
			ar rc ${NAME} ${OBJS}

bonus:		${B_SRCS}
			${CC} ${CFLAGS} ${B_SRCS} 
			ar rc ${NAME} ${B_OBJS}

clean:
			${RM} *.o

fclean:		clean
			${RM} $(NAME)

re:			fclean all bonus

.PHONY:		all clean fclean
