/*
** rempl_str_inib.c for rempl_str_inib in /home/remi/42sh
**
** Made by remi robert
** Login   <robert_r@epitech.net>
**
** Started on  Thu May 23 13:28:32 2013 remi robert
** Last update Fri May 24 10:42:23 2013 remi robert
*/

#include "42sh.h"

char	*rempl_str_inib(char *str, char *ref, char *rempl)
{
  char	**tab;
  char	*s;

  if (str == NULL || ref == NULL)
    return (NULL);
  if ((tab = str_to_wordtab(str, ref, 2)) == NULL ||
      (s = strtab_to_str(tab, rempl)) == NULL)
    {
      free_ptr_tab((void**)tab, &free);
      return (NULL);
    }
  free_ptr_tab((void**)tab, &free);
  return (s);
}
