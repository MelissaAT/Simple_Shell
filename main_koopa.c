#include "main.h"
/**
 * main - Entry point
 * @argc: count of arguments in av
 * @av: arguments
 * Return: always return 0
 */
int main(int argc __attribute__((unused)), char **av, char **env)
{
	char *command = NULL, **token;
	size_t size = 0;
	int i;

	/* Interactive mode*/
		while (1)
		{

			if (isatty(STDIN_FILENO))
				write(STDIN_FILENO, "$ ", 2);

			/* Check for end of file */
			if (getline(&command, &size, stdin) == EOF)
			{
				free(command);
				exit(0);
			}
			token = _tokenization(command, " \n");
			if (token == NULL || token[0] == NULL)
			{
				continue;
			}
			if (_strcmp(token[0], "exit") == 0)
			{
				free_grid(token);
				free(command);
				exit(0);
			}
			if (_strcmp(token[0], "env") == 0)
			{

				for (i = 0; env[i]; i++)
				{
					write(1, env[i], _strlen(env[i]));
					write(1, "\n", 1);
				}
				continue;
			}

			free(command);
			 execute_command(token, av);
		}
		free_grid(token);
	return (0);
}
