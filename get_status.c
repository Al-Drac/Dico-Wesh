/*
** get_status.c for Status pour fin de dico in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Apr  8 20:47:44 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:04:09 2016 MARCHAL Rémi
*/
#include "definition.h"

int	get_status()
{
  char	*temp;
  int	status;
  
  my_putstr("Voulez vous quitter ---- oui : o  non : n\n");
  temp = read_line();
  if (*temp == 'o')
    {
      free (temp);
      return (1);
    }
  else if (*temp == 'n')
    {
      free(temp);
      return (0);
    }
  else
    {
      free(temp);
      my_putstr("Merci de rentrer \"o\" ou \"n\"");
      status = get_status();
    }
  return (status);
}
