/*
** ajout_def.c for ajout def user in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Apr  8 10:14:46 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:28:59 2016 MARCHAL Rémi
*/
#include <stdlib.h>
#include "definition.h"
void	ajout_def(t_definition *def)
{
  char*	wesh_str;
  char*	fr_str;
  
  my_putstr("Entrez un mot en wesh\n");
  wesh_str = read_line();
  my_putstr("Et son équivalent en Français\n");
  fr_str = read_line();
  insert(def, wesh_str, fr_str);
}
