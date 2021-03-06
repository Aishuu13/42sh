/*
** FILE for FILE in /home/moriss_h/projet
**
** Made by hugues morisset
** Login   <moriss_h@epitech.net>
**
** Started on  Mon Oct  8 09:34:29 2012 hugues morisset
** Last update Mon Oct  8 16:20:21 2012 hugues morisset
*/

#include "42sh.h"

void	builtin_source(t_cmd *cmd, UNSEDP t_fds *fd, t_sh *shell)
{
  char	*source;

  source = ".42conf";
  if (cmd->argv[1] != NULL)
    source = cmd->argv[1];
  free_ptr_tab((void**)shell->alias_tab, &free);
  shell->alias_tab = NULL;
  load_conf_file(source, shell, &new_conf_set);
}
