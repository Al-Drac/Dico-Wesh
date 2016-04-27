/*
** list_init.c for initialisation liste dico in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 10:40:32 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:31:28 2016 MARCHAL Rémi
*/
#include "definition.h"

int	initialisation(t_definition *def)
{
  def->fr = NULL;
  def->wesh = NULL;
  def->next = NULL;
  return (0);
}
