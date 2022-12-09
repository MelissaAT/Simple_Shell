#include "main.h"
/**
 * execute_command - execute command
 * @args: argument pass into the program
 * @env: enviroment
 * Return: Exit succes
 */
int execute_command(char **args, char **env)
{
	int status;
	/*char **token;*/
	struct stat file;
	pid_t pid;

	pid = fork();
	if (pid == -1)
		perror("child process failed");
	else if (pid == 0)
	{
		if (stat(args[0], &file) == 0)
		{
			if (execve(args[0], args, env) == -1)
				perror("Error");
		}
		/*token = path(env);
		  args[0] = path_conc(args, token);
		  if (args[0] != NULL args != NULL)
		  execve(args[0], args, env);*/
	}
	else
		wait(&status);
	free_grid(args);
	return (1);
}
/** Check if the command is a built-in
  if (args == NULL || args[0] == NULL)
  return (0);
  if (stat(args[0], &file) == -1)

  / Check if the command exists in the current directory
  if (access(command, X_OK) == 0) 
  {
  pid = fork();

  Child process
  else if (pid == 0) 
  {
  Execute the command
  execv(args[0], args, environ);
  }
  Parent process
  else 
  {
  wait(&status);
  vs = wexistatus(status);
  }
  }

  return (vs);
  }
  */
