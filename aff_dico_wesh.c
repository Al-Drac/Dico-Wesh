/*
** aff_dico_wesh.c for Afficher dico wesh to fr in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Apr  8 10:58:42 2016 MARCHAL Rémi
** Last update Fri Apr  8 20:02:05 2016 MARCHAL Rémi
*/
#define NULL ((void*)0)
#include "definition.h"

void	aff_dico_wesh(t_definition *def)
{
  while (def != NULL)
    {
      if (def->wesh != NULL)
	{
	  my_putstr(def->wesh);
	  my_putchar(' ');
	}
      if (def->fr != NULL)
	{
	  my_putstr(def->fr);
	  my_putchar('\n');
	}
      def = def->next;
    }
}
