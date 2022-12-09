#include "main.h"
/**
 * main - Entry point
 * @argc: count of arguments in av
 * @av: arguments
 * Return: always return 0
 */
int main(int argc __attribute__((unused)), char **av)
{
	char *command = NULL, **token;
	size_t size = 0;

	/* Interactive mode*/
		while (1)
		{

			if (isatty(fileno(stdin)))
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
				break;
			}
			if (_strcmp(token[0], "env") == 0)
			{
				continue;
			}

			free(command);
			 execute_command(token, av);
		}
		free_grid(token);
	return (0);
}
