# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obensarj <obensarj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 14:53:00 by obensarj          #+#    #+#              #
#    Updated: 2024/11/29 23:31:52 by obensarj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf_char.c ft_printf_str.c ft_printf_digit.c ft_check_format.c ft_printf.c ft_printf_num.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = CC

INCLUDE = ft_printf.h

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

%.o:%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean