##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compiler
##

NAME	=	push_swap

SRC		=	src/my_print_int_array.c			\
			src/error_handling.c				\
			src/flags.c							\
			src/l_a_is_sorted.c					\
			src/my_sort_int_array.c				\
			src/init_l_a_list.c					\
			src/is_one_bigger_to_second.c		\
			src/sorting_alg.c					\
			src/main.c							\
			src/basic_c_functions/my_getnbr.c	\
			src/basic_c_functions/my_putchar.c	\
			src/basic_c_functions/my_putstr.c	\
			src/basic_c_functions/my_put_nbr.c	\

OBJ		=	$(SRC:.c=.o)

RM		= 	rm -rf

TRASH	=	vgcore* *~

CC		=	gcc

CFLAGS	+=	-I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ) $(TRASH)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all