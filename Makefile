# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 16:33:09 by kpoquita          #+#    #+#              #
#    Updated: 2021/12/28 16:40:26 by kpoquita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS =  -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_puthex.c \
		ft_parse.c ft_putnbr.c \
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
