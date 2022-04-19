# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 14:30:28 by sdi-lega          #+#    #+#              #
#    Updated: 2021/09/24 15:26:23 by sdi-lega         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS 	= $(filter-out ${BONUS}, $(wildcard ft*.c))

BONUS	= $(wildcard ft_lst*.c)

OBJS 	= ${SRCS:.c=.o}

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

bonus:		${BONUS:.c=.o}
			ar -rc ${NAME} ${BONUS:.c=.o}
			ranlib ${NAME}
			
clean:
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

re:			fclean all

list:
			ar -t ${NAME}
			
.PHONY:		all clean fclean re