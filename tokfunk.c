#include "main.h"
/**
 * _tokenization - function specifies are indivivual strings
 * @buffer: string
 * Return: the srting
 */
char **_tokenization(char *buffer)
{
	int i = 0;
	char **args = NULL;
	char *token == NULL;

	token = malloc(sizeof(char *) * bufsize);

		while (token != NULL)
		{
			args[i] = strdup(token);
			token = strtok(NULL, " ");
			i++;
		}
	return(args);
}
