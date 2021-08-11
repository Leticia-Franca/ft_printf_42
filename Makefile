# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 13:30:34 by lfranca-          #+#    #+#              #
#    Updated: 2021/08/11 16:26:45 by lfranca-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a

SRC = srcs/ft_printf.c srcs/ft_integ_conversion.c srcs/ft_str_conversion.c\
		srcs/ft_char_conversion.c srcs/ft_hexa_conversion.c

OBJS = $(SRC:.c=.o)

LIBFTPATH = ./libft/

FLAGS = -Wall -Wextra -Werror

CC = clang

all: $(NAME)

$(NAME): $(OBJS) $(LIBFTPATH)
	@echo making library...
	@make -C $(LIBFTPATH) $(LIBFT)
	@cp -r $(LIBFTPATH)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@echo joining printf in the library...
	@ar -rcs $(NAME) $(OBJS)
	@echo library all done!

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re