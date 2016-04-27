##
## Makefile for Makefile DicoWesh in /home/remimarchal/algo/DicoWESH/marcha_r
## 
## Made by MARCHAL Rémi
## Login   <marcha_r@etna-alternance.net>
## 
## Started on  Thu Apr  7 10:32:52 2016 MARCHAL Rémi
## Last update Fri Apr  8 23:41:09 2016 MARCHAL Rémi
##
CC =	gcc
NAME = dicowesh
SRC =   main.c  \
	read_line.c	\
	list_init.c	\
	my_putstr.c	\
	my_putchar.c	\
	get_status.c	\
	aff_menu.c	\
	ajout_def.c	\
	aff_dico_wesh.c	\
	aff_dico_fr.c	\
	resp_user_menu.c	\
	insert_def.c	
OBJ = $(SRC:%.c=%.o)
FLAGS = -W -Wall -Werror -g3
RM = rm -f

all:
		$(CC) $(SRC) -o $(NAME) $(FLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
