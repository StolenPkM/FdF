# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/08 17:52:18 by ybenoit           #+#    #+#              #
#    Updated: 2017/05/15 11:40:07 by pabonnin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			gcc $(FLAGS)
FLAGS=		-Wall -Wextra -Werror
NAME=		libft.a
INCLUDES=	./includes
SRCS= 		ft_atoi.c\
			ft_sqrt.c\
			ft_bzero.c\
			ft_char_count.c\
			ft_cp_new_elem.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isblank.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_isspace.c\
			ft_isxdigit.c\
			ft_itoa.c\
			ft_itoabase.c\
			ft_lstadd.c\
			ft_lstdel.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memdel.c\
			ft_memmove.c\
			ft_memset.c\
			ft_next_char.c\
			ft_num_count.c\
			ft_pow.c\
			ft_pow10.c\
			ft_powf.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putlong.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_putstr_fd.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strequ.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnstr.c\
			ft_strpbrk.c\
			ft_strrchr.c\
			ft_strrev.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_word_count.c\
			get_next_line.c\
			ft_strlen_c.c\
			ft_strdup_c.c\
			ft_strndup.c\
			ft_strjoin_free.c

OBJS=$(SRCS:.c=.o)

C_NO="\033[00m"
C_OK="\033[32m"
C_GOOD="\033[32m"
C_ERROR="\033[31m"
C_WARN="\033[31m"

SUCCESS=$(C_GOOD)SUCCESS$(C_NO)
OK=$(C_OK)OK$(C_NO)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc  $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

%.o: %.c $(INCLUDES)/libft.h
	@$(CC) -c -o $@ $< -I $(INCLUDES)
	@echo "Linking" [ $< ] $(OK)

clean:
	rm -f $(OBJS)
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
