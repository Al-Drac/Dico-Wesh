/*
** my_putchar.c for  in /home/remimarchal/CJour01/my_putchar
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Mon Mar 21 11:22:44 2016 MARCHAL Rémi
** Last update Mon Mar 21 12:13:53 2016 MARCHAL Rémi
*/
#include <unistd.h>

void	 my_putchar(char c)
{
  write(1, &c, 1);
}
