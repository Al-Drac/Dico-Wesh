/*
** resp_user_menu.c for réponse utilisateur menu in /home/remimarchal/algo/DicoWESH/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Apr  8 09:33:31 2016 MARCHAL Rémi
** Last update Fri Apr  8 23:43:11 2016 MARCHAL Rémi
*/
#include "definition.h"

int		resp_user_menu(t_definition *def)
{
  char	*resp;
  int	status;
  
  if ((resp = read_line()) == NULL)
    {
      my_putstr("resp_user_menu read_line failed\n");
      return (1);
    }
  if (resp[0] == 'a')
    aff_dico_wesh(def);
  else if (resp[0] == 'b')
    aff_dico_fr(def);
  else if (resp[0] == '1')
    ajout_def(def);
  else if (resp[0] == '2')
    my_putstr("wesh_to_fr");
  else if (resp[0] == '3')
    my_putstr("fr_to_wesh");
  else if (resp[0] == 'q')
    {
      status = get_status();
      return (status);
    }
  else
    my_putstr("Merci de choisir une option valide\n");
  free(resp);
  return (0);
}
