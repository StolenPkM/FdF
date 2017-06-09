CC =		gcc
CCO =		gcc -c
FLAGS =		-Wall -Wextra -Werror
NAME =		fdf
LIB =		libft.a
LIB_DOS =	libft
INC =		./src/fdf.h
SRC_PATH =	./src
OPENGL = -lmlx -framework OpenGL -framework AppKit
SRC =	main.c\
	map_init.c\
	parse.c\
	fdf_error.c\
	key.c
SRCS =	$(addprefix $(SRC_PATH)/, $(SRC))
OBJS =	main.o\
	map_init.o\
	parse.o\
	fdf_error.o\
	key.o
C_NO =		"\033[00m"
C_OK =		"\033[32m"
C_GOOD	=	"\033[32m"
C_ERROR =	"\033[31m"
C_WARN =	"\033[31m"
SUCCESS =	$(C_OK)SUCCESS$(C_NO)
OK =		$(C_OK)OK$(C_NO)

all:	$(NAME)

$(NAME):	$(LIB) $(OBJS)
		$(CC) $(SRCS) libft/libft.a  -o fdf $(FLAGS) $(OPENGL)
		@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)
$(LIB):
	@make -C $(LIB_DOS)
$(OBJS):
	$(CCO) $(FLAGS) $(SRCS)
clean:
	rm -f $(OBJS)
	rm -f ./libft/*.o
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean:	clean
	rm -f $(NAME)
	rm -f libft/libft.a
re:	fclean all

.PHONY:	all clean fclean
