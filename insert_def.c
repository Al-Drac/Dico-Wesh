/*
** insert_def.c for insertion definition DicoWesh in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 11:53:05 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:30:17 2016 MARCHAL Rémi
*/
#include "definition.h"

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

void my_putstr(char *);

int	insert(t_definition *def, char *wesh_str, char *fr_str)
{
  t_definition  *new;

  new = malloc(sizeof(t_definition));
  if (new == NULL)
    {
      my_putstr("insert malloc failed\n");
      return (EXIT_FAILURE);
    }
  new->fr = fr_str;
  new->wesh = wesh_str;
;
  while (def->next != NULL)
    {   ;
      def = def->next;
    }
  
  def->next = new;
  
  return (EXIT_SUCCESS);
}
