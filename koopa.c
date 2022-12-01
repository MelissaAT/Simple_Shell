#include "main.h"
/**
 * main - 
 * Return:
 */

int main()
{
	size_t bufsize = 0;
	char *buffer = NULL; *token, **tokens = malloc(sizeof(char));
	int i = 0;

	while(1)
	{
		write(1, "$", 2);
		getline(&buffer, &bufsize, stdin);

		token = strtok(buffer, "\n");
		while(token)
		{
			tokens[i] = token;
			token = strtok(NULL, "\n");
			i++
		}
		execve(tokens[0], &*tokens, NULL);
	}
	return(0);
}
