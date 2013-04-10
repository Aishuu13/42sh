/*
** FILE for FILE in /home/moriss_h/projet
**
** Made by hugues morisset
** Login   <moriss_h@epitech.net>
**
** Started on  Mon Oct  8 09:34:29 2012 hugues morisset
** Last update Mon Oct  8 16:20:21 2012 hugues morisset
*/

#include "../../include/42sh.h"

void	builtin_env(t_sh *shell, t_cmd *cmd)
{
  int pid;

  if ((pid = fork()) == 0)
    {
      execve("/usr/bin/env", cmd->argv, shell->env);
      my_exit(0);
    }
}
