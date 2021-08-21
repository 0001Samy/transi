# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 16:16:28 by hefernan          #+#    #+#              #
#    Updated: 2020/07/20 17:03:17 by hefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= ft_f.c do_op.c
OBJS	= ${SRCS:.c=.o}
HEADER	= ft.h

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:	${SRCS}
		${CC} -c ${CFLAGS} ${SRCS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

clean:
		${RM} ${OBJS}

fclean:		clean
					${RM} ${NAME}
