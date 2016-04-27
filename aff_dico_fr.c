/*
** aff_dico_fr.c for Afficher dico fr to wesh in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Apr  8 23:38:20 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:39:37 2016 MARCHAL Rémi
*/
#define NULL ((void*)0)
#include "definition.h"

void    aff_dico_fr(t_definition *def)
{
  while (def != NULL)
    {
      if (def->wesh != NULL)
	{
	  my_putstr(def->fr);
	  my_putchar(' ');
	}
      if (def->fr != NULL)
	{
	  my_putstr(def->wesh);
	  my_putchar('\n');
	}
      def = def->next;
    }
}
