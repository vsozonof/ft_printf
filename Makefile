# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:33:43 by vsozonof          #+#    #+#              #
#    Updated: 2022/11/29 15:35:05 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

GCC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NM = norminette
HEADER = includes/header.h \

SRCS = 	srcs/ft_putchar_fd.c \
        srcs/ft_putstr_fd.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_putnbr_hexa.c \
		srcs/ft_strlen.c \
		srcs/ft_pointer_handler.c \
		srcs/ft_printf.c \
		
BONUS = 

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

$(NAME): $(OBJS)
		$(AR) $@ $^

bonus: $(BONUS_OBJS)
		$(AR) $(NAME) $^

norme: $(SRCS) $(HEADER)
		$(NM) $@ $^

all: $(NAME)

git: norme
		git add .
		git commit -m "fix calloc and strlcat stp moi du futur"
		git push
     
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re norme bonus
