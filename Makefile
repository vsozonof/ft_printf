# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:33:43 by vsozonof          #+#    #+#              #
#    Updated: 2022/12/02 11:07:00 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NM = norminette
HEADER = includes/ft_printf.h \
		 includes/ft_struct.h \

SRCS = 	srcs/ft_putstr.c \
		srcs/ft_putnbr.c \
		srcs/ft_putnbr_hexa.c \
		srcs/ft_strlen.c \
		srcs/ft_pointer_handler.c \
		srcs/ft_printf.c \
		
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(HEADER)
		$(AR) $@ $^

norme: $(SRCS) $(HEADER)
		$(NM) $@ $^

all: $(NAME)

git: norme
		git add .
		git commit -m "project finished"
		git push
     
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re norme bonus
