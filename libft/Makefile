# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 23:17:16 by pabonnin          #+#    #+#              #
#    Updated: 2017/06/09 11:47:30 by pabonnin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC = libft.h

ALLO = *.o
ALLC = ft_*.c \
	   get_next_line.c \

CCO = gcc -c -Wall -Wextra -Werror
CCC = gcc -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CCO) $(ALLC) $(INC)
	ar rc $(NAME) $(ALLO) 
	ranlib $(NAME)

clean:
	    /bin/rm -rf $(ALLO)

fclean: clean
	    /bin/rm -rf $(NAME)

re: fclean all
