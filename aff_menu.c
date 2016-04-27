/*
** aff_menu.c for menu DicoWesh in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 14:57:19 2016 MARCHAL Rémi
** Last update Fri Apr  8 22:35:29 2016 MARCHAL Rémi
*/
#include "definition.h"

void	aff_menu()
{
  my_putstr("Bienvenue sur le DicoWesh !\n");
  my_putstr("a : afficher le dictionnaire sous la forme wesh : fr\n");
  my_putstr("b : afficher le dictionnaire sous la forme fr : wesh\n");
  my_putstr("1 : ajouter une définition\n");
  my_putstr("2 : traduire du wesh au francais\n");
  my_putstr("3 : traduire du francais au wesh\n");
  my_putstr("q : quitter\n");
}
