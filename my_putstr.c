/*
** my_putstr.c for exo1j3 in /home/remimarchal/CJour03/marcha_r/my_putstr
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Wed Mar 23 09:56:27 2016 MARCHAL Rémi
** Last update Fri Apr  8 14:59:24 2016 MARCHAL Rémi
*/
#include <unistd.h>

void    my_putchar(char c);
void    my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
