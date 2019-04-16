##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Maketype
##

SRC	=	main.c	\
		calcul_matrix_crypt.c	\
		inverse.c	\
		display.c	\
		error.c	\
		matrix_maker.c	\
		size_finder.c	\
		calcul_matrix_decrypt.c	\
		invert4_one.c	\
		invert4_two.c	\
		invert4_three.c	\
		invert4_four.c

OBJ		=	$(SRC:.c=.o)

NAME	=	103cipher

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L./lib -lmy -lm -I./include
	rm *.o

clean:
	rm -f $(OBJ)
	rm -f *.o

fclean:	clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all
