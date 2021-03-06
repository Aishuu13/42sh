/*
** decal_string.c for decal_string.c in /home/remi/Dropbox/Projet/edition_ligne_termcap
**
** Made by remi robert
** Login   <robert_r@epitech.net>
**
** Started on  Sun May  5 17:01:53 2013 remi robert
** Last update Tue May 14 19:59:03 2013 remi robert
*/

#include "42sh.h"

void	decal_string(char *cmd, int pos, char caractere)
{
  int	indice;
  int	size;

  size = my_strlen(cmd);
  if (pos < 0 || pos >= size || size + 1 > SIZE_BUFFER)
    return ;
  indice = size - 1;
  cmd[(size + 1) % SIZE_BUFFER] = '\0';
  while (indice >= 0 && indice >= pos)
    {
      cmd[indice + 1] = cmd[indice];
      indice -= 1;
    }
  cmd[pos] = caractere;
}
