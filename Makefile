# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 22:17:10 by abayar            #+#    #+#              #
#    Updated: 2021/11/22 02:31:20 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_tohex.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c


OBJ = ft_tohex.o ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_printf.o

FLAGS	= gcc -Wall -Wextra -Werror

NAME	= libftprintf.a

OBJ 	= $(SRCS:.c=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)

%.o		: %.c
	$(FLAGS) -c $< -o $@
	ar rc $(NAME) $@
clean	:
	rm -f *.o
fclean	: clean
	rm -f ${NAME}
re		: fclean all

