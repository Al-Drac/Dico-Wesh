/*
** main.c for main pour DicoWesh in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 13:21:25 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:25:06 2016 MARCHAL Rémi
*/
#define NULL ((void*)0)
#include "definition.h"

int		main()
{
  t_definition	*def;
  int		status;

  status = 0;
  system("clear");
  if ((def = malloc(sizeof(t_definition))) == NULL)
    return (1);
  initialisation(def);
  while (status != 1)
    {
     aff_menu();
     status = resp_user_menu(def);;
    }
  free(def);
  return (0);
}
