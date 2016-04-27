/*
** definition.h for struct_def in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Apr  7 10:19:21 2016 MARCHAL Rémi
** Last update Sat Apr  9 09:48:17 2016 MARCHAL Rémi
*/
#ifndef __DEFINITION_H__
#define __DEFINITION_H__
#include <stdlib.h>

typedef struct s_definition
{
  char  *fr;
  char  *wesh;
  struct s_definition *next;
}               t_definition;

int     my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
void    my_putchar(char c);
void    my_putstr(char *str);
void    aff_dico_wesh(t_definition *def);
void    my_putstr(char *str);
void    ajout_def(t_definition *def);
int	insert(t_definition *def, char *wesh_str, char *fr_str);
int     initialisation(t_definition *def);
char    *read_line();
int	resp_user_menu(t_definition *def);
void    aff_menu();
int	get_status();
void    aff_dico_fr(t_definition *def);
#endif
