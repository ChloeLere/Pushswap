##
## EPITECH PROJECT, 2020
## makefile
## File description:
## bsq
##

NAME	=	push_swap

SRC	=	pushswap.c	\
		list_add_create.c 	\
		list_rm.c 	\
		list_display.c 	\
		r.c 	\
		rr.c 	\
		p.c 	\
		s.c 	\
		show_statuses.c 	\
		free_list.c 	\

all :	$(NAME)

$(NAME):
	make -C ./lib/my
	gcc -W -Wall -Wextra -o $(NAME) -g $(SRC) -L./lib/my -lmy
clean:
	make -C ./lib/my
	rm -f *~
	rm -f *#

fclean: clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all
	make re -C ./lib/my
