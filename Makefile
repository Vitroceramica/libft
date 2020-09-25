# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/04 14:14:38 by antonmar          #+#    #+#              #
#    Updated: 2020/08/04 14:24:36 by antonmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SONAME = libft.so
CC = gcc
FLAGS = -Wall -Wextra -Werror -I. -c
FILES = ft_*\.c
OBJ = ft_*\.o

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
		gcc $(FLAGS) $(FILES)

all: $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
		rm -f $(SONAME)
re: fclean all

so:		
		gcc -shared -o $(SONAME) -fPIC $(FILES)

.PHONY: all clean fclean re so