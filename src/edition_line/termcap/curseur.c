/*
** curseur.c for curser in /home/remi/Projet/alum1/ALLUM
**
** Made by remi robert
** Login   <robert_r@epitech.net>
**
** Started on  Tue Feb  5 08:45:15 2013 remi robert
** Last update Sun Apr 14 16:10:56 2013 remi robert
*/

#include "my_func.h"

int	curseur(int x, int y)
{
  char	*s;
  char	*curser;

  s = tgetstr("cm", NULL);
  curser = tgoto(s, x, y);
  my_put_str(curser);
  return (0);
}
