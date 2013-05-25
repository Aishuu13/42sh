/*
** clear.c for clear in /home/remi/Dropbox/Projet/edition_ligne_termcap
**
** Made by remi robert
** Login   <robert_r@epitech.net>
**
** Started on  Wed May  8 18:33:31 2013 remi robert
** Last update Sat May 25 13:07:58 2013 remi robert
*/

#include "42sh.h"

void	clear_cmd(char *cmd, t_param *param)
{
  if (param == NULL)
    return ;
  apply_termcap(param->termcap.str_cl, 0, param->fd_tty);
  curseur(0, 0);
  my_putstr(param->str_prompt, 1, -1);
  param->begin_pos_y = 0;
  refresh_view(cmd, param);
  view(cmd, param);
}
