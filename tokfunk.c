#include "main.h"
/**
 * _tokenization - function specifies are indivivual strings
 * @buffer: string
 * Return: the srting
 */
char **_tokenization(char *buffer)
{
	int i;
	char **args = NULL;
	char *token = NULL;
	
	(void) buffer;
	
	i = 0;
	token = malloc(sizeof(char *) * 2);

	while (token)
	{
		args[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;

	return(args);

}
