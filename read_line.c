/*
** read_line.c for Readline in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 15:23:04 2016 MARCHAL Rémi
** Last update Fri Apr  8 16:37:56 2016 MARCHAL Rémi
*/
#include <stdlib.h>
#include <unistd.h>
#include "definition.h"

char	*read_line()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
