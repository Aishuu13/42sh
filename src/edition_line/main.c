/*
** main.c for main in /home/remi/Projet/new_edition_line/src
**
** Made by remi robert
** Login   <robert_r@epitech.net>
**
** Started on  Sat May  4 11:42:47 2013 remi robert
** Last update Fri May 24 22:04:41 2013 maxime lavandier
*/

#include "42sh.h"

int	init_termcap(char **env, t_param *param)
{
  if ((param->fd_tty = open("/dev/tty", O_RDWR)) == -1)
    return (0);
  my_putstr_termcap(param->fd_tty, NULL);
  if (verif_env(env) == EXIT_FAILURE)
    {
      my_putstr("Error environnement termcap\n", 2, -1);
      return (0);
    }
  if (reset_save_mod(SAVE, param->fd_tty) == EXIT_FAILURE)
    {
      my_putstr("Error SAVE termcap\n", 2, -1);
      return (0);
    }
  if (mod_raw(param->fd_tty) == EXIT_FAILURE)
    {
      my_putstr("Error mod_raw termcap\n", 2, -1);
      return (0);
    }
  return (1);
}
